
for k=1:1:num_simulation
    acc=0;
    for i=2:1:iterations
       if (liks_log_fpga(k,i) ~= liks_log_fpga(k,i-1))
           acc= acc+1;
       end
       end

       arate(k)=acc/iterations;
       
end
arate