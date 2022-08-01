int findLongestConseqSubseq(int arr[], int N)
    {
      sort(arr,arr+N);
     int count=1,maxcount=1;
     for(int i=0;i<N;i++)
     {
         if(arr[i]-arr[i+1]==-1)
         {
             count++;
             if(maxcount<count)
             {maxcount=count;}
         }
         else if(arr[i]==arr[i+1])
         {continue;}
         else
         {
           count=1;
         }
     }
     return maxcount;
    }