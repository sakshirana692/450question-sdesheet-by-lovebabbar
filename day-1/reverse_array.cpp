string reverseWord(string str){
    int n=str.size()-1;
    int first=0;
  while(first<=n)
  {
      swap(str[first],str[n]);
      first++;
      n--;
  }
return str;
}