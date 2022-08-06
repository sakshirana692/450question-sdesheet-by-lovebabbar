bool areRotations(string s1,string s2)
    {
      string temp=s1+s1;
      int n=s1.size();
      int m=s2.size();
      if(n!=m)
      {return false;}
      else
      {
          if(temp.find(s2)!=string::npos)
          {return true;}
          else
          {return false;}
      }
    }