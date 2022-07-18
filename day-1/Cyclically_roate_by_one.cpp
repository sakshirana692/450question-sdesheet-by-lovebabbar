void reverse(int arr[],int start,int end)
{
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void rotate(int arr[], int n)
{
    int k=1;
    reverse(arr,0,n-1);
      reverse(arr,k,n-1);
}