function [thetas, liks, particles, acceptance_rate, prop_thetas, prop_liks, urnd_matlab] = adpmcmc_new(theta_dim,...
    initial_theta,iterations,fix_cov_std,ad_cov_std,N,initial_state,...
    state_count,state_dim,obs_dim,state_param_fixed_dim,state_param_rand_dim,...
    obs_param_fixed_dim,obs_param_rand_dim,state_parameters,obs_parameters,...
    alpha_prior,beta_prior,observations,states)
 
global problem;
 
if (problem==0)
    
    %tracking
    thetas = zeros(theta_dim,iterations);
    liks = zeros(1,iterations);
    particles = zeros(state_dim,state_count*iterations);
    
    thetas(:,1) = initial_theta;
    CurrentTheta = thetas(:,1);
    state_parameters(state_param_fixed_dim+1)=CurrentTheta(1);
    obs_parameters(obs_param_fixed_dim+1)=CurrentTheta(2);
    [Likelihood,xparts,w] = bootstrap_filter(N,initial_state,...
        state_count,state_dim,obs_dim,state_param_fixed_dim,...
        state_param_rand_dim,obs_param_fixed_dim,obs_param_rand_dim,...
        state_parameters,obs_parameters,observations,states,1);
    
    %ind=randsample(N,1,true,w); %chooses one particle out of N according to their weights - this particle is kept
    %xparts = samplesinit;
    %particles(:,1) = xparts;
    particles(:,1:state_count) = xparts;
    liks(1,1) = Likelihood;

    %adaptive mcmc parameters
    cov = diag(fix_cov_std);%diag(repmat(fix_cov_std,theta_dim,1));      %fixed cov-matrix
    %Adaptivecov = diag(repmat(ad_cov_std,theta_dim,1));  %adaptive cov-matrix 
    %

    AcceptanceCounter=0;
    
    %MCMC iterations
    for i = 2:iterations
%i
        %Choose proposal and propose new sample
        
            %if rand < 0.9  
                %while 1
                    ProposedTheta = mvnrnd(CurrentTheta,cov);
                    %if (ProposedTheta(1)>0 && ProposedTheta(2)>0) 
                    %    break
                    %end
                %end
            %else                                    
%                 ProposedTheta = mvnrnd(CurrentTheta,Adaptivecov);
%                 while 1
%                     ProposedTheta = mvnrnd(CurrentTheta,cov);
%                     if (ProposedTheta(1)>0 && ProposedTheta(2)>0) 
%                         break
%                     end
%                 end
            %end        
            
        
        
            
        %Compute likelihood of proposed sample
        %ExpTheta = exp(ProposedTheta(1:state_dim));
        %[ProposedLikelihood,samplesprop2,wprop] = bootstrap_filter(obs_dim,strains,state_count,N,state_dim,state_param_dim,obs_param_dim,ExpTheta,ProposedTheta((state_dim+1):theta_dim),OneRowData_int,OneRowData_float,InitialValues,model);

        state_parameters(state_param_fixed_dim+1)=ProposedTheta(1);
        obs_parameters(obs_param_fixed_dim+1)=ProposedTheta(2);
        [ProposedLikelihood,xpartsprop,wprop] = bootstrap_filter(N,...
            initial_state,state_count,state_dim,obs_dim,...
            state_param_fixed_dim,state_param_rand_dim,obs_param_fixed_dim,...
            obs_param_rand_dim,state_parameters,obs_parameters,observations,states,i);
    
        %ind=randsample(N,1,true,wprop); %chooses one particle out of N according to their weights - this particle is kept
        %xpartsprop= samplesprop(:,ind);
        %xpartsprop = samplersprop;
        
        %include priors - omitted here    
        if (~all(ProposedTheta > 0))            
            ProposedLikelihood = -1e30;
        end
        
        propose = ProposedLikelihood;
        % ...
            %+ sum((((-alpha_prior-1)*ProposedTheta(1:state_dim))-(beta_prior./exp(ProposedTheta(1:state_dim))) ...
            %+ ProposedTheta(1:state_dim)))-... 
        %normlike([0,sqrt(1000)],ProposedTheta((state_dim+1):theta_dim));
        current = Likelihood;% ...
           % + sum(    (((-alpha_prior-1)*CurrentTheta(1:state_dim))-(beta_prior./exp(CurrentTheta(1:state_dim))) ...
           % + CurrentTheta(1:state_dim))    )-...
            %normlike([0,sqrt(1000)],CurrentTheta((state_dim+1):theta_dim));

        % Compute log-ratio of posteriors    
        logratio = propose-current;

        %MCMC acceptance step
        if log(rand) < logratio       
            Likelihood = ProposedLikelihood;
            xparts=xpartsprop;
            CurrentTheta = ProposedTheta;  
            AcceptanceCounter=AcceptanceCounter+1;
        end
        thetas(:,i) = CurrentTheta;
        liks(1,i) = Likelihood;
        particles(:,((i-1)*state_count+1):(i*(state_count))) = xparts;

        %Adaptive covariance
        %if i > 10
        %    Adaptivecov = (ad_cov_std)*nancov(thetas');
        %end    

        %display
        if mod(i,1000)==0 
            disp(i); 
        end 

        %Update acceptance rate
        acceptance_rate = AcceptanceCounter / (iterations);

    end
    
    
    
    
elseif (problem==1) 
    
    
    %genome
    thetas = single(nan(theta_dim,iterations));
    liks = single(zeros(1,iterations));
    particles = single(zeros(state_dim,state_count*iterations));
    prop_thetas = single(zeros(theta_dim,iterations));
    prop_liks = single(zeros(1,iterations));
    urnd_matlab = single(zeros(1,iterations));
    
    
    thetas(:,1) = log(initial_theta);
    CurrentTheta = thetas(:,1);
    state_parameters(state_param_fixed_dim+1)=exp(CurrentTheta(1));
    obs_parameters(obs_param_fixed_dim+1)=exp(CurrentTheta(2));
    [Likelihood,xparts,w] = bootstrap_filter(N,initial_state,...
        state_count,state_dim,obs_dim,state_param_fixed_dim,...
        state_param_rand_dim,obs_param_fixed_dim,obs_param_rand_dim,...
        state_parameters,obs_parameters,observations,states,1);
    
    %ind=randsample(N,1,true,w); %chooses one particle out of N according to their weights - this particle is kept
    %xparts = samplesinit(:,ind);
    particles(:,1:state_count) = xparts;
    liks(1,1) = Likelihood;

    
    %adaptive mcmc parameters
    %cov = [fix_cov_std 0; 0 fix_cov_std/10];
    cov = diag(fix_cov_std);      %fixed cov-matrix
    Adaptivecov = diag(repmat(((2.38^2)*ad_cov_std)/theta_dim,theta_dim,1));  %adaptive cov-matrix 
    %

    AcceptanceCounter=single(0);
    
    %log_adcov = zeros(2,2,iterations);
    
    %MCMC iterations
    for i = 2:iterations
        %i
%i
        %Choose proposal and propose new sample
%         if i<100                       
            %while 1
                ProposedTheta = single(mvnrnd(CurrentTheta,cov));
                %if (ProposedTheta(1)>0 && ProposedTheta(2)>0) 
                    %break
                %end
            %end
%         else            
%             if rand < 0.05  
%                 while 1
%                     ProposedTheta = mvnrnd(CurrentTheta,cov);
%                     if (ProposedTheta(1)>0 && ProposedTheta(2)>0) 
%                         break
%                     end
%                 end
%             else                                                    
%                 while 1
%                     ProposedTheta = mvnrnd(CurrentTheta,Adaptivecov);
%                     if (ProposedTheta(1)>0 && ProposedTheta(2)>0) 
%                         break
%                     end
%                 end
%             end               
%         end    
        %Compute likelihood of proposed sample
        %ExpTheta = exp(ProposedTheta(1:state_dim));
        %[ProposedLikelihood,samplesprop2,wprop] = bootstrap_filter(obs_dim,strains,state_count,N,state_dim,state_param_dim,obs_param_dim,ExpTheta,ProposedTheta((state_dim+1):theta_dim),OneRowData_int,OneRowData_float,InitialValues,model);

        %if (all(ProposedTheta > 0))    
        
            state_parameters(state_param_fixed_dim+1)=exp(ProposedTheta(1));
            obs_parameters(obs_param_fixed_dim+1)=exp(ProposedTheta(2));        
                [ProposedLikelihood,xpartsprop,wprop] = bootstrap_filter(N,...
                initial_state,state_count,state_dim,obs_dim,...
                state_param_fixed_dim,state_param_rand_dim,obs_param_fixed_dim,...
                obs_param_rand_dim,state_parameters,obs_parameters,observations,states,i);
    
        %else
        %ind=randsample(N,1,true,wprop); %chooses one particle out of N according to their weights - this particle is kept
        %xpartsprop= samplesprop(:,ind);               
        %    ProposedLikelihood = -1e30;
        %end
           
        
        %include priors - omitted here    
        propose = ProposedLikelihood;% ...
            %+ sum((((-alpha_prior-1)*ProposedTheta(1:state_dim))-(beta_prior./exp(ProposedTheta(1:state_dim))) ...
            %+ ProposedTheta(1:state_dim)))-... 
        %normlike([0,sqrt(1000)],ProposedTheta((state_dim+1):theta_dim));
        current = Likelihood;% ...
           % + sum(    (((-alpha_prior-1)*CurrentTheta(1:state_dim))-(beta_prior./exp(CurrentTheta(1:state_dim))) ...
           % + CurrentTheta(1:state_dim))    )-...
            %normlike([0,sqrt(1000)],CurrentTheta((state_dim+1):theta_dim));

        % Compute log-ratio of posteriors    
        logratio = ( propose - current ) + log(lognpdf(exp(CurrentTheta(1)),(ProposedTheta(1)),cov(1,1))) + log(lognpdf(exp(CurrentTheta(2)),(ProposedTheta(2)),cov(2,2))) - log(lognpdf(exp(ProposedTheta(1)),(CurrentTheta(1)),cov(1,1))) - log(lognpdf(exp(ProposedTheta(2)),(CurrentTheta(2)),cov(2,2)));
        % + ( log(mvncdf(ProposedTheta,zeros(1,theta_dim),cov)) - log(ncdf(ProposedTheta)) ); 

        %MCMC acceptance step
        u = single(rand);
        urnd_matlab(1,i) = u;
        
        if log(u) < logratio       
            Likelihood = ProposedLikelihood;
            xparts=xpartsprop;
            CurrentTheta = ProposedTheta;  
            AcceptanceCounter=AcceptanceCounter+1;
        end
        thetas(:,i) = CurrentTheta;
        liks(1,i) = Likelihood;
        particles(:,((i-1)*state_count+1):(i*(state_count))) = xparts;
        
        prop_thetas(:,i) = ProposedTheta;
        prop_liks(1,i) = ProposedLikelihood;

        %Adaptive covariance
        %if i > 10
        %    Adaptivecov = ((2.38^2)/theta_dim)*ad_cov_std*nancov(thetas');
        %    log_adcov(:,:,i)=Adaptivecov;
        %end    

        %display
        if mod(i,1000)==0 
            disp(i); 
        end 

        %Update acceptance rate
        acceptance_rate = AcceptanceCounter / (iterations);

    end
    
    %save('log_adcov.mat','log_adcov');

 


end


