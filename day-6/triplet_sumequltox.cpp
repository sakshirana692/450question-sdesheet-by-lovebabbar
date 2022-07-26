bool find3Numbers(int A[], int n, int X)
    {sort(A,A+n);
       for(int i=0;i<n;i++)
       {
           int y=X-A[i];
           int low=i+1;
           int end =n-1;
           while(low<end)
           {
               if(A[low]+A[end]==y)
               {return true;
                  break;
               }
               else if(A[low]+A[end]>y)
               {end--;}
               else
               {low++;}
           }
       }
       return false;
    }