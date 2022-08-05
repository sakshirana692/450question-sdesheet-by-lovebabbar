
	int isPalindrome(string S)
	{
	 string p;
 p=S;
  reverse(S.begin(),S.end());
  if(p==S)
  {
      return 1;
  }
  else
  {return 0;}
	}