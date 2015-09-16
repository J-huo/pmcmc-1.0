clear all;
%clc;
close all;

rng('shuffle');

num_simulation = 1;
fpga_sim = 1;
software_sim = 0;

%PF
strain = 1;
state_count=200; %T --> number of states
N=512; %number of particles
sigma_t=1; %common unknown parameter for state transitions
sigma_o=0.1; %unknown parameter for observation equation
init_state_parameters=[0 1]; %mean and variance of initial particle set
    
%MCMC
iterations = 1000; %number of MCMC iterations
initial_theta = [1, 0.1]; % initial theta values
fix_cov_std=[0.2 0.1];%0.05/theta_dim;
ad_cov_std=[0.03 0.03];%0.05/theta_dim;%0.056644;
prior_type = 1;
prior_parameters = [prior_type 1.2 100 1 100];

filename_save = 'results_test.mat';
%test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);

test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);

% fix_cov_std=[0.6 0.3];%0.05/theta_dim;
% filename_save = 'results_1001_256_0p6.mat';
% test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% fix_cov_std=[0.8 0.4];%0.05/theta_dim;
% filename_save = 'results_1001_256_0p8.mat';
% test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% fix_cov_std=[1.0 0.5];%0.05/theta_dim;
% filename_save = 'results_1001_256_1p0.mat';
% test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% fix_cov_std=[1.2 0.5];%0.05/theta_dim;
% filename_save = 'results_1001_256_1p2.mat';
% test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
%fix_cov_std=[1.5 0.75];%0.05/theta_dim;
%filename_save = 'results_1001_256_1p5.mat';
%test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
%fix_cov_std=[2.0 1.0];%0.05/theta_dim;
%filename_save = 'results_1001_256_2p0.mat';
%test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% 
% 
% 
% N=512
% fix_cov_std=[0.6 0.3];%0.05/theta_dim;
% filename_save = 'results_1001_512_0p6_v3.mat';
% test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% 
% 
% N=1024
% % %fix_cov_std=[0.1 0.05];%0.05/theta_dim;
% % %filename_save = 'results_1001_1024_0p1.mat';
% % %test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[0.2 0.1];%0.05/theta_dim;
% % % filename_save = 'results_1001_1024_0p2.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % fix_cov_std=[0.4 0.2];%0.05/theta_dim;
% % filename_save = 'results_1001_1024_0p4_v2.mat';
% % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% fix_cov_std=[0.6 0.3];%0.05/theta_dim;
% filename_save = 'results_1001_1024_0p6_v3.mat';
% test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[0.8 0.4];%0.05/theta_dim;
% % % filename_save = 'results_1001_1024_0p8.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[1.0 0.5];%0.05/theta_dim;
% % % filename_save = 'results_1001_1024_1p0.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[1.2 0.5];%0.05/theta_dim;
% % % filename_save = 'results_1001_1024_1p2.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[1.5 0.75];%0.05/theta_dim;
% % % filename_save = 'results_1001_1024_1p5.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[2.0 1.0];%0.05/theta_dim;
% % % filename_save = 'results_1001_1024_2p0.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % 
% 
% N=2048
% fix_cov_std=[0.6 0.3];%0.05/theta_dim;
% filename_save = 'results_1001_2048_0p6_v3.mat';
% test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% 
% 
% 
% 
%  N=4096
% % %fix_cov_std=[0.1 0.05];%0.05/theta_dim;
% % %filename_save = 'results_1001_4096_0p1.mat';
% % %test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % %fix_cov_std=[0.2 0.1];%0.05/theta_dim;
% % %filename_save = 'results_1001_4096_0p2.mat';
% % %test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % fix_cov_std=[0.4 0.2];%0.05/theta_dim;
% % filename_save = 'results_1001_4096_0p4_v2.mat';
% % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
%  fix_cov_std=[0.6 0.3];%0.05/theta_dim;
%  filename_save = 'results_1001_4096_0p6_v3.mat';
%  test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % %fix_cov_std=[0.8 0.4];%0.05/theta_dim;
% % %filename_save = 'results_1001_4096_0p8.mat';
% % %test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[1.0 0.5];%0.05/theta_dim;
% % % filename_save = 'results_1001_4096_1p0.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[1.2 0.5];%0.05/theta_dim;
% % % filename_save = 'results_1001_4096_1p2.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[1.5 0.75];%0.05/theta_dim;
% % % filename_save = 'results_1001_4096_1p5.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[2.0 1.0];%0.05/theta_dim;
% % % filename_save = 'results_1001_4096_2p0.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % 
% 
% N=8192
% fix_cov_std=[0.6 0.3];%0.05/theta_dim;
% filename_save = 'results_1001_8192_0p6_v3.mat';
% test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% 
% 
% 
%  N=16384
% % %fix_cov_std=[0.1 0.05];%0.05/theta_dim;
% % %filename_save = 'results_1001_16384_0p1.mat';
% % %test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % %fix_cov_std=[0.2 0.1];%0.05/theta_dim;
% % %filename_save = 'results_1001_16384_0p2.mat';
% % %test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % fix_cov_std=[0.4 0.2];%0.05/theta_dim;
% % filename_save = 'results_1001_16384_0p4_v2.mat';
% % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
%  fix_cov_std=[0.6 0.3];%0.05/theta_dim;
%  filename_save = 'results_1001_16384_0p6_v3.mat';
%  test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
%  %fix_cov_std=[0.8 0.4];%0.05/theta_dim;
% % %filename_save = 'results_1001_16384_0p8.mat';
% % %test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[1.0 0.5];%0.05/theta_dim;
% % % filename_save = 'results_1001_16384_1p0.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[1.2 0.5];%0.05/theta_dim;
% % % filename_save = 'results_1001_16384_1p2.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[1.5 0.75];%0.05/theta_dim;
% % % filename_save = 'results_1001_16384_1p5.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[2.0 1.0];%0.05/theta_dim;
% % % filename_save = 'results_1001_16384_2p0.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % fix_cov_std=[3.0 1.5];%0.05/theta_dim;
% % % filename_save = 'results_1001_16384_3p0.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % 
% % 
% % 
% % %N=16384; %number of particles
% % %filename_save = 'results_1000_128.mat';
% % %test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % 
% % % N=512;
% % % filename_save = 'results_1001_512_test.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);
% % % N=1024;
% % % filename_save = 'results_1001_1024_test.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);N=512;
% % % N=2048;
% % % filename_save = 'results_1001_2048_test.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);N=512;
% % % 
% % % num_simulation = 1;
% % % N=8192;
% % % filename_save = 'results_1001_8192_test.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);N=512;
% % % N=16384;
% % % filename_save = 'results_1001_16384_test.mat';
% % % test_HIL_2(fpga_sim, software_sim, num_simulation, strain, state_count, N, sigma_t, sigma_o, init_state_parameters, iterations, initial_theta, fix_cov_std, ad_cov_std, prior_parameters, filename_save);