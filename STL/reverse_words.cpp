#include "bits/stdc++.h"

using namespace std;

void reversex(string s)
{
  vector<string> v;
  string x="";
  for(int i=0;i<s.length();i++)
  {
    if(s[i]==' ')
    {
    v.push_back(x);
    x="";
  }
  else
  {
    x+=s[i];
  }
  }
  v.push_back(x);
  for(int i=v.size()-1;i>=0;i--)
  {
    cout<<v[i]<<" ";
  }
}

int main(int argc, char const *argv[]) {
  string s;//="my name is pranay";
  getline(cin,s);
  //cin>>s;
  reversex(s);
  return 0;
}
