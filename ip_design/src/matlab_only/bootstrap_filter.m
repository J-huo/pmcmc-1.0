function [log_likelihood,particles_saved,weights] = bootstrap_filter(N,...
    initial_particles,state_count,state_dim,obs_dim,state_param_fixed_dim,...
    state_param_rand_dim,obs_param_fixed_dim,obs_param_rand_dim,...
    state_parameters,obs_parameters,observations,x,iter)

global problem;

if (problem==0)
    
    log_likelihood_temp = zeros (1,state_count);
    
    % particles & weights    
    weights = ones([1 N])/N;
    particles = zeros([state_dim N]);
    particles_saved = zeros([state_dim state_count]);
    
    particles_saved(:,1) = particles(:,randi(N));
    
    %variables inside function
    %particles_resampled = zeros([state_dim N]);
    %L = zeros([1 N]);           %likelihoods
    %LL = zeros([obs_dim N]);      % log-likelihoods
    
    % initial particle states from the prior
    particles(1:state_dim,1:N) = initial_particles;  

    % MMSE estimates
    Xe = zeros([state_dim state_count]);    
S = [obs_parameters(4:(3+obs_dim)); 
         obs_parameters((4+obs_dim):(3+2*obs_dim))];            % sensor positions (uniformly spread over the monitored area)
    % time loop
    for t = 2:state_count

        % transition        
        particles = transition_equation_vector(state_dim, state_param_fixed_dim,...
            state_param_rand_dim, state_parameters, particles);

        % observation
        %LL = zeros([J N]);      % log-likelihood
        %L = zeros([1 N]);       % likelihood
        [L, scaling_factor] = likelihood_equation_vector(obs_dim,...
            obs_param_fixed_dim, obs_param_rand_dim, obs_parameters,...
            particles, observations(:,t));
        
        log_likelihood_temp(t)=log(mean(L))+scaling_factor;
        %normalized weights
        weights = L./sum(L);
        
        %resampling
        idx = randsample(N,N,true,weights);
        particles = particles(:,idx);
                
        % MMSE estimation
        Xe(:,t) = particles*weights';
if (iter>50000)        
        figure(1);
		subplot(121);
        plot(particles(1,1:N),particles(2,1:N),'c.');
        hold on;
        plot(S(1,:),S(2,:),'ro');
        plot(x(1,1:t),x(2,1:t),'k-');
        plot(Xe(1,1:t),Xe(2,1:t),'g-');
        hold off;
        legend('particles','sensors','target position','estimate');
		
		figure(1);
		subplot(222);
			plot(1:t,x(3,1:t),'k');
			hold on;
			plot(1:t,Xe(3,1:t),'g');
			hold off;
			xlabel('time');
			ylabel('v_1');
			legend('velocity','estimate');
		subplot(224);
% 			plot(1:t,x(4,1:t),'k');
% 			hold on;
% 			plot(1:t,Xe(4,1:t),'g');
% 			hold off;
% 			xlabel('time');
% 			ylabel('v_2');
% 			legend('velocity','estimate');
            plot(1:t,log_likelihood_temp(1:t),'k');
			%hold on;
			%plot(1:t,Xe(4,1:t),'g');
			%hold off;
			xlabel('time');
			ylabel('lik');
			legend('mean lik of particles');
end       

    particles_saved(:,t) = particles(:,randi(N));

    end; %t

    % % MSE - BF
    %SEbf = sum((x-Xe).^2);
    %fprintf(1,'MSE(BF) =\t%7.4f\n', mean( SEbf ) );

    log_likelihood = sum ( log_likelihood_temp );


elseif (problem==1)
    
    
    log_likelihood_temp = zeros (1,state_count);
    
    % weights    
    weights = ones([1 N])/N;
        
    % initial particle states from the prior
    particles = zeros([state_dim N]);
    particles(1:state_dim,1:N) = initial_particles;      
    particles_saved = zeros([state_dim state_count]);
    
    index_saved = 1;
    particles_saved(:,1) = particles(:,index_saved);
    
    %variables inside function
    %particles_resampled = zeros([state_dim N]);
    %L = zeros([1 N]);           %likelihoods
    %LL = zeros([obs_dim N]);      % log-likelihoods
    
    

    % MMSE estimates
    %Xe = zeros([state_dim state_count]);    
    
    %S = [obs_parameters(4:(3+obs_dim)); 
    %     obs_parameters((4+obs_dim):(3+2*obs_dim))];            % sensor positions (uniformly spread over the monitored area)
    
     % time loop
    for t = 2:state_count

        % transition 
        
        state_parameters_send(1)=state_parameters(t);
        state_parameters_send(2)=state_parameters(state_param_fixed_dim + state_param_rand_dim);
        state_param_fixed_dim_send=state_dim;
        
        particles = transition_equation_vector(state_dim, state_param_fixed_dim_send,...
            state_param_rand_dim, state_parameters_send, particles);

        
        % observation
        
        obs_parameters_send(1, 1:obs_dim) = obs_parameters(1, (obs_dim*(t-1)+1):(obs_dim*(t-1)+obs_dim) );
        obs_parameters_send(1, obs_dim+1) = obs_parameters(1, obs_param_fixed_dim + obs_param_rand_dim);
        obs_param_fixed_dim_send=obs_dim;
        
        [L, scaling_factor] = likelihood_equation_vector(obs_dim,...
            obs_param_fixed_dim_send, obs_param_rand_dim, obs_parameters_send,...
            particles, observations(:,t));
               
        log_lik_test = log(mean(L));
        
        if (isnan(log_lik_test))
            error('NaN mean log.')
        elseif (isinf(log_lik_test))
            error('Inf mean log.')
        else
            log_likelihood_temp(t)=log_lik_test+scaling_factor;
        end        
        
        
        %normalized weights
        weights = L./sum(L);
                
        [max_value, index_saved] = max(weights);
        
        %resampling
        idx = randsample(N,N,true,weights);
        particles = particles(:,idx);          

        particles_saved(:,t) = particles(:,unidrnd(N));
    
    end; %t

    % % MSE - BF
    %SEbf = sum((x-Xe).^2);
    %fprintf(1,'MSE(BF) =\t%7.4f\n', mean( SEbf ) );

    log_likelihood = sum ( log_likelihood_temp );
    
    if (isnan(log_likelihood) || log_likelihood>0)
         error('NaN or positive total log lik.')    
    end  
    
    if (log_likelihood<-1e30)
        log_likelihood = -1e30;
        disp('-Inf total log lik');
    end
    
   
    
    
    
end   

end