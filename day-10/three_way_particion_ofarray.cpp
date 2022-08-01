void threeWayPartition(vector<int>& array,int a, int b)
    {
        vector<int>v;
        for(int i=0;i<array.size();i++)
        {
            if(array[i]<a)
            {
                v.push_back(array[i]);
            }
        }
        for(int i=0;i<array.size();i++)
        {
            if(array[i]>=a&&array[i]<=b)
            {
                v.push_back(array[i]);
            }
        }
        for(int i=0;i<array.size();i++)
        {
            if(array[i]>b)
            {
                v.push_back(array[i]);
            }
        }
        int k=0;
        for(int i=0;i<v.size();i++)
        {
            array[k]=v[i];
            k++;
        }
    }