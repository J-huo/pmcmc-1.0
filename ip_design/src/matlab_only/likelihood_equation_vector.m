function [likelihoods, scaling_factor] = likelihood_equation_vector(obs_dim, obs_param_fixed_dim, obs_param_rand_dim, obs_parameters, states, observations)

global problem;

N = size(states,2); %number of particles
state_dim = size(states,1);

if (problem==0)

    %tracking
    J = obs_dim;                                    % no. of sensors
    P0 = obs_parameters(1);                         % transmitted power
    ss = obs_parameters(2);                         % side of the square area monitored by the sensor network [centered at (0,0)]
    alpha = obs_parameters(3);                      % power-decay exponent
    S = [obs_parameters(4:(3+J)); 
         obs_parameters((4+J):(3+2*J))];            % sensor positions (uniformly spread over the monitored area)

    s2g = obs_parameters(4+2*J);                    % variance of the sensor measurements
    
    LL = zeros([J N]);      % log-likelihood    
    for j = 1:J
            D = sqrt( sum( ( S(:,j)*ones([1 N]) - states(1:2,1:N) ).^2 ) ); % dimension 1xN
            fnl = 10.*log10( P0./(D.^alpha) ); % dim. 1xN
            LL(j,1:N) = -( observations(j) - fnl ).^2; % dim. 1xN
    end; %j
    %likelihoods = exp( (1/(2*s2g)).*( sum(LL) - max(sum(LL)) ) );  % to avoid numerical accuracy problems (one likelihood will always be =1)
    scaling_factor = max(sum(LL));
    likelihoods = exp( (1/(2*s2g)).*( sum(LL) - scaling_factor ) );
    
    if ~(all(~isnan(likelihoods)))
        error('NaN likelihood.')
    end
    
    if ~(all(~isinf(likelihoods)))
        error('Inf likelihood.')
    end
    
    if ~(sum(likelihoods) > 0) || ~all(likelihoods>=0) % catches NaNs
                error(message('stats:randsample:InvalidWeights'));
    end
    
elseif (problem==1) 
    
    %genome    
    n(1,:) = obs_parameters(1,1:obs_param_fixed_dim);
    s_o = obs_parameters(obs_param_fixed_dim + obs_param_rand_dim);
    
    LL = zeros([obs_dim N]);      % log-likelihood    
    temp = zeros([obs_dim N]);  
    p=zeros(obs_dim,N);
    %temp=zeros(obs_dim,1);
    %p=zeros(obs_dim,1);
    %observation=zeros(obs_dim,1);

    for i=1:1:obs_dim        
        temp(i,1:N)=normrnd(states,repmat(s_o,state_dim,N));
        p(i,1:N)=exp(temp(i,1:N))./(exp(temp(i,1:N))+1);    
        LL(i,1:N)=log(binopdf(observations(i),n(1,i),p(i,1:N)));
    end
    
    LL_p=sum(LL);
    nonvalid = (LL_p<-1e30);
    LL_p(nonvalid) = -1e30;
    if any(nonvalid)
        %disp('-Inf sub-loglik')
    end
    
    scaling_factor = max(LL_p);
    
    likelihoods = exp ( LL_p - scaling_factor );
    
    if ~(all(~isnan(likelihoods)))
        error('NaN sub-loglikelihood.')
        %likelihoods = -1e30;
    end
    
    if ~(all(~isinf(likelihoods)))
        error('Inf sub-loglikelihood.')
        %likelihoods = -1e30;
    end
    
    if ~(sum(likelihoods) > 0) || ~all(likelihoods>=0) % catches NaNs
               error(message('stats:randsample:InvalidWeights'));
    end
    
    
end

end