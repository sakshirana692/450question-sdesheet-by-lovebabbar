bool findPair(int arr[], int size, int n){
   for(int i=0;i<size;i++)
   {
       for(int j=i+1;j<size;j++)
       {
           if(abs(arr[i]-arr[j])==n)
           {
               return true;
               
           }
       }
   }
   return false;
}