vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
        vector<int>v;
            int i=0,j=0,k=0;
            int prev1,prev2,prev3;
            prev1=prev2=prev3=INT_MIN;
            while(i<n1&&j<n2&&k<n3)
            {while(A[i]==prev1&&i<n1)
            {i++;}
            while(B[j]==prev2&&j<n2)
            {j++;}
            while(C[k]==prev3&&k<n3)
            {k++;}
            
                if(A[i]==B[j]&&A[i]==C[k])
                { v.push_back(A[i]);
                prev1=A[i];
                prev2=B[j];
                prev3=C[k];
                    i++;j++;k++;
                  
                }
                else if(A[i]<B[j])
                {prev1=A[i];
                    i++;
                }
                else if(B[j]<C[k])
                {prev2=B[j];
                    j++;
                }
                else
               {
                   prev3=C[k];k++;}
            }
            
      