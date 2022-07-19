 int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
       
        int d=0;
        for(auto x:m)
        {
            if(x.second>1)
            {
                d=x.first;
                break;
            }
        }
        return d;
    }