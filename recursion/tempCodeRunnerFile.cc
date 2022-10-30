if(i<0)
        return -1;

    if(val==arr[i])
        return i;
    
    
    return lst(arr,n,i-1,val);