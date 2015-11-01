k=1;
for i=1:1000:200000

    particles=i;
    states=i;
    state_dim=1;
    iterations=1000;
    thetas=2;
    data=8;
    params=1;

    kbytes_thetas=iterations*(states*state_dim+thetas)*4/1024;
    kbytes_liks=iterations*1*4/1024;
    kbytes_init_particles=particles*state_dim*1*4/1024;
    kbytes_params=states*state_dim*params*4/1024;
    kbytes_data=states*state_dim*data*4/1024;
    kbytes_particles=particles*state_dim*2*4/1024;
    kbytes_weights=particles*2*4/1024;
    kbytes_thetas_current=(states*state_dim+thetas)*2*4/1024;

    mbytes_onchip(k)=(kbytes_init_particles+kbytes_params+kbytes_data+kbytes_particles+kbytes_weights+kbytes_thetas_current)/1024;
    mbytes_offchip(k)=(kbytes_thetas+kbytes_liks+kbytes_init_particles+kbytes_params+kbytes_data+kbytes_particles+kbytes_weights+kbytes_thetas_current)/1024;
    mbytes_pf(k)=(kbytes_particles+kbytes_weights)/1024;
    mbytes_offchip_output(k)=(kbytes_thetas+kbytes_liks+kbytes_init_particles+kbytes_params+kbytes_data)/1024;

    
    
    k=k+1;
    
end