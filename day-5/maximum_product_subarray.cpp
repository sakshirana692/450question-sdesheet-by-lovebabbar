long long maxProduct(vector<int> arr, int n) {
      
     long long  maxmulti=INT_MIN,multi=1;;
      for(int i=0;i<n;i++)
      {
          multi=multi*arr[i];
          maxmulti=max(maxmulti,multi);
          if(multi==0)
          {
            multi=1;
          }
         
      }
      multi=1;
      for(int i=n-1;i>=0;i--)
      {
          multi=multi*arr[i];
          maxmulti=max(maxmulti,multi);
          if(multi==0)
          {
            multi=1;
          }
         
      }
    
      
      
      return maxmulti;
	}