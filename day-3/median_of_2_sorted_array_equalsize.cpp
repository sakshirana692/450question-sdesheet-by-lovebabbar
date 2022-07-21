int find_median(vector<int> v)
		{
		   sort(v.begin(),v.end());
		   int d=v.size()/2;
		   if(v.size()%2!=0)
		   for(int i=0;i<v.size();i++)
		   {
		       if(i==d)
		       {return v[i];
		           break;
		       }
		   }
		   else
		   {
		        for(int i=0;i<v.size();i++)
		   {
		       if(i==d)
		       {return(v[i-1]+v[i])/2;
		           break;
		       }
		   }
		   }
        }