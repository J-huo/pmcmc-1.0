function observation = observation_equation(obs_dim, obs_param_fixed_dim, obs_param_rand_dim, obs_parameters, state)

global problem;

if (problem==0)

    %tracking
    J = obs_dim;                                    % no. of sensors
    P0 = obs_parameters(1);                         % transmitted power
    ss = obs_parameters(2);                         % side of the square area monitored by the sensor network [centered at (0,0)]
    alpha = obs_parameters(3);                      % power-decay exponent
    S = [obs_parameters(4:(3+J)); 
         obs_parameters((4+J):(3+2*J))];            % sensor positions (uniformly spread over the monitored area)

    s2g = obs_parameters(4+2*J);                    % variance of the sensor measurements
    g = sqrt(s2g)*randn([J 1]);

    observation=zeros(J,1);
    for j = 1:J
            observation(j,1) = 10*log10( P0 / (norm(state(1:2,1)-S(1:2,j))^alpha) ) + g(j,1);
    end; 
    
elseif (problem==1) 
    
    %genome    
    n(:,1) = obs_parameters(1:obs_param_fixed_dim);
    s_o = obs_parameters(obs_param_fixed_dim + obs_param_rand_dim);
    
    temp=zeros(obs_dim,1);
    p=zeros(obs_dim,1);
    observation=zeros(obs_dim,1);

    for i=1:1:obs_dim        
        temp(i,1)=normrnd(state,s_o);
        p(i,1)=exp(temp(i,1))/(exp(temp(i,1))+1);    
        observation(i,1)=binornd(n(i,1),p(i,1));
    end
    
end

end