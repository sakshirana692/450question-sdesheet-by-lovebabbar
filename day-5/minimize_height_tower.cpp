int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int diff=arr[n-1]-arr[0];
        int mins=arr[0]+k,maxs=arr[n-1]-k;
        int mi,ma;
            for(int i=0;i<n-1;i++)
            {
               
                mi=min(mins,arr[i+1]-k);
                    ma=max(arr[i]+k,maxs);
                    if(mi<0)
                    {continue;}
                    diff=min(diff,ma-mi  );
                
                
            }
            return diff;
        
    }