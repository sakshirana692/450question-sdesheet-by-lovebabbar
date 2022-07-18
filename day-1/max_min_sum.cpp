class Solution
{
   public:
    int findSum(int A[], int N)
    {
    sort(A,A+N);
    int min=0;
    int max=0;
    min=A[0];
    max=A[N-1];
    return (min+max);
    }

};