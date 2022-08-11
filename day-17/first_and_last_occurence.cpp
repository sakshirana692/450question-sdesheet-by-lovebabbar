vector<int>find(int arr[],int n,int x)
{vector<int>p;
 for(int i=0;i<n;i++)
 {
     if(arr[i]==x)
     {
         p.push_back(i);
         break;
     }
 }
 for(int i=n-1;i>=0;i--)
 {
    
         if(arr[i]==x)
         {
             p.push_back(i);
             break;
         }
     
 }
 if(p.empty())
 {
     p.push_back(-1);
     p.push_back(-1);
 }
 return p;
}
{vector<int>p;
 for(int i=0;i<n;i++)
 {
     if(arr[i]==x)
     {
         p.push_back(i);
         break;
     }
 }
 for(int i=n-1;i>=0;i--)
 {
    
         if(arr[i]==x)
         {
             p.push_back(i);
             break;
         }
     
 }
 if(p.empty())
 {
     p.push_back(-1);
     p.push_back(-1);
 }
 return p;
}
{vector<int>p;
 for(int i=0;i<n;i++)
 {
     if(arr[i]==x)
     {
         p.push_back(i);
         break;
     }
 }
 for(int i=n-1;i>=0;i--)
 {
    
         if(arr[i]==x)
         {
             p.push_back(i);
             break;
         }
     
 }
 if(p.empty())
 {
     p.push_back(-1);
     p.push_back(-1);
 }
 return p;
}