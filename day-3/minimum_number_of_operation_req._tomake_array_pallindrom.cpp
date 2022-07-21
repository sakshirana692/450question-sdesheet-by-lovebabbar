int PalinArray(int a[], int n)
    {
    int count=0;
    for(int i=0;i<n;i++)
    {int d=a[i];
    int reverse=0;
    while(d>0)
    {int rem=0;
        rem=d%10;
        reverse=(reverse*10)+rem;
        d=d/10;}
        if(reverse==a[i])
        {
            count++;
        }
        else
        {break;
        }
    }
    
    if(count==n)
    {
        return 1;
    }
    else
    {return 0;}
    }