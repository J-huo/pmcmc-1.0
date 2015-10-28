function [state] = state_prior_equation()
    
global problem;

if (problem==0)
    
state_prior_parameters=[0 1]; %mean and variance of initial particle set
    %tracking
    s2r0=state_prior_parameters(1);
    s2v0=state_prior_parameters(2);
    state(:,1) = sqrt([s2r0; s2r0; s2v0; s2v0]).*randn([state_dimension 1]);

elseif (problem==1)
    
state_prior_parameters=[0 1]; %mean and variance of initial particle set
    %genome
    m=state_prior_parameters(1);
    s2=state_prior_parameters(2);
    state(:,1)=normrnd(m,s2);
    
end
    
end