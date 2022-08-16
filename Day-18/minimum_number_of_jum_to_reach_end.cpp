class Solution{
  public:
    int minJumps(int arr[], int n){
        if(n<=1)
        {return 0;}
       if(arr[0]==0)
       {return -1;}
       else{
          int jump=0;
          int fathest=0;
          int current=0;
          for(int i=0;i<n-1;i++)
          {
              fathest=max(fathest,arr[i]+i);
              if(i==current)
              { current=fathest;
                  jump++;
              }
              if(i>=fathest)
              {return -1;}
          }
          return jump;
      }
      return -1;
      
    }
};