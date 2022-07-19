long long maxSubarraySum(int arr[], int n){
        
      int sum=0;
      int  maxsum=INT_MIN;
     for(int i=0;i<n;i++)
     {
         sum+=arr[i];
         maxsum=max(maxsum,sum);
         if(sum<0)
         {
            sum=0;
         }
     }
     return maxsum;
      
    }