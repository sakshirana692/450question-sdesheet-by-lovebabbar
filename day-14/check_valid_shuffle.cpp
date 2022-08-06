#include<bits/stdc++.h>
using namespace std;
bool isShuffledSubstring(string A, string B,string C){
int  n=A.size();
int m=B.size();
int o=C.size();
sort(A.begin(),A.begin());
sort(B.begin(),B.begin());
sort(C.begin(),C.begin());
if(n+m!=o)
return false;
else{
    int i=0;
    int j=0;
     int k=0;
  while(k<o)
  {
    if(i<n && A[i]==C[k])
    {i++;}
    else if(j<m && B[j]==C[k])
    {j++;}
    else
    {
        return false;
    }
    k++;
  }
return true;
}
}
int main()
{
    string str1 = "123";
    string str2 = "pqr";
    string str3="p1q2r3";
    bool a = isShuffledSubstring(str1, str2,str3);
    if (a)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}