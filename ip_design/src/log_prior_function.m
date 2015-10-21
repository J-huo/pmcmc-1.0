function prior_value = log_prior_function(theta,prior_parameters)
    
        prior_value = 0;
        for i=1:1:size(theta)
            a = prior_parameters((i-1)*2+1);
            b = prior_parameters((i-1)*2+2);
            prior_value = prior_value + log(gampdf(theta(i),a,b));
        end
        
  
end