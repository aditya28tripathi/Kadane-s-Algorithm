    long long maxSubarraySum(int arr[], int n){
        
        long sum = 0;
        long maximum = arr[0];
        
        
        
        for(int i =0;i<n;i++){
            sum = sum+arr[i];
            maximum= max(maximum,sum);
            
            if(sum<0)
            sum = 0;
        }
        
        return maximum;
    }
};
