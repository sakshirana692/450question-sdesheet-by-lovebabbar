  bool subArrayExists(int arr[], int n)
    {int sum=0;
     int count=0;
     unordered_set<int>m;
     for(int i=0;i<n;i++)
     {sum+=arr[i];
         if(sum==0 ||arr[i]==0)
         { return true; }
     if(m.find(sum)!=m.end())
         {return true;}
         m.insert(sum);}
  
     return false;
    }