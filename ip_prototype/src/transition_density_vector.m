function [proposed_particles] = transition_density_vector(state_parameters_fixed,...
    state_parameters_rand, previous_particles)

global problem;

if (problem==0)
    
    %tracking
    T = state_parameters(1);        % observation period

    AT =    [1 0 T 0;               % matrix A_T
            0 1 0 T;
            0 0 1 0;
            0 0 0 1];

    s2u=state_parameters(2);  
    U = sqrt(s2u)*randn([state_dim N]);    

    states(:,1:N) = AT*previous_states(:,1:N) + U; 
    
elseif (problem==1)
  
    load static_parameters.mat
    load('../../matlab/dynamic_parameters.mat','particles');
    
    %genome
    delta=state_parameters_fixed(1);
    s=state_parameters_rand(1);    
    s_t = sqrt( ( s^2 ) * delta );    
    proposed_particles(:,1:particles)=normrnd(single(previous_particles(:,1:particles)),single(repmat(s_t,state_dimension,particles))); 
    
end   

end