int majorityElement(int a[], int size)
    {
        map<int,int>m;
        for(int i=0;i<size;i++)
        {
            m[a[i]]++;
        }
        int max=0,key=0;
        for(auto p:m)
        {
            if(p.second>max)
            {
                max=p.second;
                key=p.first;
            }
        }
        int n=size/2;
        if(max>n)
        {
            return key;
        }
        else
        {
           return -1;
        }

    }