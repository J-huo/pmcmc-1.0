function [state] = state_prior_equation(state_dim, init_state_param_dim, init_state_parameters)
    
global problem;

if (problem==0)
    %tracking
    s2r0=init_state_parameters(1);
    s2v0=init_state_parameters(2);
    state(:,1) = sqrt([s2r0; s2r0; s2v0; s2v0]).*randn([state_dim 1]);

elseif (problem==1)    
    %genome
    m=init_state_parameters(1);
    s2=init_state_parameters(2);
    state(:,1)=normrnd(m,s2);
    
end
    
end