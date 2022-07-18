void Rearrange(int arr[], int n)
{
    int temp[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            temp[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            temp[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        arr[i]=temp[i];
    }
}