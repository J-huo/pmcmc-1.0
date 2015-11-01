for i=2:1000

ProposedTheta = prop_thetas_log_fpga(:,i);


state_parameters(state_param_fixed_dim+1)=ProposedTheta(1);
        obs_parameters(obs_param_fixed_dim+1)=ProposedTheta(2);
       
        [ProposedLikelihood,xpartsprop,wprop] = bootstrap_filter(N,...
            init_states,state_count,state_dim,obs_dim,...
            state_param_fixed_dim,state_param_rand_dim,obs_param_fixed_dim,...
            obs_param_rand_dim,state_parameters,obs_parameters,observations,states,i);
        
        error(i) = ProposedLikelihood - prop_liks_log_fpga(i);
        
end