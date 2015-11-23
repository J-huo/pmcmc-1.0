function [likelihoods] = observation_density_vector(obs_parameters_fixed, obs_parameters_rand, data, current_particles)

global problem;

%N = size(states,2); %number of particles
%state_dimension = size(states,1);

if (problem==0)

    %tracking
    J = observation_dimension;                                    % no. of sensors
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
    
    load static_parameters.mat
    load('../../matlab/dynamic_parameters.mat','particles');
    
    %genome    
    n(1,:) = obs_parameters_fixed(1,:);
    s_o = obs_parameters_rand(1);%(obs_param_fixed_dim + obs_param_rand_dim);
    
    LL = single(zeros([observation_dimension particles]));      % log-likelihood    
    temp = single(zeros([observation_dimension particles]));  
    p=single(zeros(observation_dimension,particles));
    %temp=zeros(observation_dimension,1);
    %p=zeros(observation_dimension,1);
    %observation=zeros(observation_dimension,1);

    for i=1:1:observation_dimension        
        temp(i,1:particles)=normrnd(current_particles,repmat(s_o,state_dimension,particles));
        ind_big = (temp(i,1:particles)>single(68));
        ind_small = (temp(i,1:particles)<single(-68));        
        p(i,1:particles)=exp(temp(i,1:particles))./(exp(temp(i,1:particles))+1); 
        p(i,ind_big) = single(1);
        p(i,ind_small) = single(0);
        LL(i,1:particles)=log(binopdf(data(1,i),n(1,i),p(i,1:particles)));
    end
    
    ind_ll = (~(LL>single(-1e30)));
    LL(ind_ll) = single(-1e30);
    likelihoods=sum(LL);
    nonvalid = (likelihoods<single(-1e30));
    likelihoods(nonvalid) = single(-1e30);
    
    if any(nonvalid)
        %disp('Count:')
    %disp(sum(nonvalid));
        %disp('-Inf sub-loglik')
    end
    
    
end

end