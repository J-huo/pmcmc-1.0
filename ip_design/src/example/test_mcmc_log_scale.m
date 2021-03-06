clear all;
iterations = 5000;
v = 0.05;

data = normrnd(12,12,1,2000);
Likelihood = -1e30;
CurrentTheta = 5;
CurrentExpTheta = exp(CurrentTheta);
AcceptanceCounter = 0;

a = 1.2;
b = 3000;

for i = 1:iterations    
     
    ProposedTheta = normrnd(CurrentTheta,v);
                  
    ProposedExpTheta = exp(ProposedTheta);
    
    
    ProposedLikelihood = -normlike([12,sqrt(ProposedExpTheta)],data);
     
    propose = ProposedLikelihood + log(gampdf(ProposedExpTheta,a,b));
    current = Likelihood + log(gampdf(CurrentExpTheta,a,b));
    
%    
    logratio = propose-current + log(lognpdf(CurrentExpTheta,ProposedTheta,v)) - log(lognpdf(ProposedExpTheta,CurrentTheta,v));
%
    if log(rand) < logratio       
        Likelihood = ProposedLikelihood;        
        CurrentTheta = ProposedTheta;  
        CurrentExpTheta = ProposedExpTheta; 
        AcceptanceCounter=AcceptanceCounter+1;
    end
    
    theta(i) = CurrentTheta;
    lik(i) = Likelihood;
   
end


     accrAcceptanceRateate = AcceptanceCounter / iterations;