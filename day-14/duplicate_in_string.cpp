char firstRep (string s)
    {
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
       for(int i=0;i<s.size();i++)
       {
           if(m[s[i]]>1)
           {return s[i];
           break;}
       }
        return '#';
    }