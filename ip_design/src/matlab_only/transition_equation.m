function [state] = transition_equation(state_dim, state_param_fixed_dim, state_param_rand_dim, state_parameters, previous_state)

global problem;

if (problem==0)
    
    %tracking
    T = state_parameters(1);        % observation period

    AT =    [1 0 T 0;               % matrix A_T
            0 1 0 T;
            0 0 1 0;
            0 0 0 1];

    s2u=state_parameters(2);  
    u = sqrt(s2u)*randn([state_dim 1]);    

    state = AT*previous_state + u;

elseif (problem==1)
    
    %genome
    delta=state_parameters(1);
    s=state_parameters(2);    
    s_t = sqrt( ( s^2 ) * delta );    
    state=normrnd(previous_state,s_t); 
    
end   

end