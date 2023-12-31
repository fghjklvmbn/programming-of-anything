def fib(limit):
    lib = [];    
    sum = 0;
    j = 0;
    for j in range(0, limit+1):
        if(j == 0):
            sum += 1;
            lib.insert(0,1);
        elif(j == 1) :
            sum += 1;
            lib.insert(1,1);
        else : 
            sum = lib[j-2] + lib[j-1];
            lib.insert(j,sum);
        
        # print(j, sum[j]);
        j += 1;
    
    return sum;
