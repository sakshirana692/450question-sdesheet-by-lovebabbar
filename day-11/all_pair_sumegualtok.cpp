int getPairsCount(int arr[], int n, int k) {
      unordered_map<int,int>m;
        int count=0;
     for(int i=0;i<n;i++)
     {
       int b=k-arr[i];
       if(m[b])
       {
           count+=m[b];
       }
       m[arr[i]]++;
     }
     return count;
    }