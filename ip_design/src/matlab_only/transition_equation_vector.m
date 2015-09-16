function [states] = transition_equation_vector(state_dim, state_param_fixed_dim, state_param_rand_dim, state_parameters, previous_states)

global problem;

N=size(previous_states,2);

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
    
    %genome
    delta=state_parameters(1);
    s=state_parameters(2);    
    s_t = sqrt( ( s^2 ) * delta );    
    states(:,1:N)=normrnd(previous_states(:,1:N),repmat(s_t,state_dim,N)); 
    
end   

end