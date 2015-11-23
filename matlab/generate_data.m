function [states, observations] = generate_data(state_dim, state_count, state_param_fixed_dim, state_param_rand_dim, state_parameters, obs_dim, obs_param_fixed_dim, obs_param_rand_dim, obs_parameters, init_state_param_dim, init_state_parameters)

    global problem;

    if (problem==0)
        
        %tracking
        states = zeros(state_dim, state_count);
        states(:,1)=state_prior_equation();
        for i=2:1:state_count        
            states(:,i)=transition_equation(state_dim,...
                state_param_fixed_dim, state_param_rand_dim, state_parameters, states(:,i-1)); 
        end

        observations = zeros(obs_dim, state_count);
        %observations(:,1)=observation_prior_equation(obs_dim, init_obs_param_dim, init_obs_parameters);
        for i=2:1:state_count
            observations(:,i)=observation_equation(obs_dim,...
                obs_param_fixed_dim, obs_param_rand_dim, obs_parameters, states(:,i));     
        end    
    
    elseif (problem==1)
        %rng(111111112);
        %genome
        states = zeros(state_dim, state_count);
        states(:,1)=state_prior_equation();
        %rng(1231112);
        for i=2:1:state_count       
            state_parameters_send(1)=state_parameters(i);
            state_parameters_send(2)=state_parameters(state_count + state_param_rand_dim);
            state_param_fixed_dim_send=state_dim;
            states(:,i)=transition_equation(state_dim,...
                state_param_fixed_dim_send, state_param_rand_dim,...
                state_parameters_send, states(:,i-1)); 
        end

        observations = zeros(obs_dim, state_count);
        %observations(:,1)=observation_prior_equation(obs_dim, init_obs_param_dim, init_obs_parameters);
        for i=2:1:state_count        
            obs_parameters_send(1:obs_dim) = obs_parameters( (obs_dim*(i-1)+1):(obs_dim*(i-1)+obs_dim) );
            obs_parameters_send(obs_dim+1) = obs_parameters(obs_param_fixed_dim*state_count + obs_param_rand_dim);
            obs_param_fixed_dim_send=obs_dim;
            observations(:,i)=observation_equation(obs_dim, obs_param_fixed_dim_send,...
                obs_param_rand_dim, obs_parameters_send, states(:,i));     
        end
    
    end
    

end