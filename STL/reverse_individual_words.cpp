#include "bits/stdc++.h"

using namespace std;

void reverseit(string str)
{
  stack<char>st;
  for(int i=0;i<str.length();i++)
  {
    if(str[i]!=' ')st.push(str[i]);
    else{
      while(!st.empty())
      {
        cout<<st.top();
        st.pop();
      }
      cout<<" ";
    }
  }
  while(!st.empty())
  {
    cout<<st.top();
    st.pop();
  }
}

int main(int argc, char const *argv[]) {
  string str;
  getline(cin, str);
  //cin>>str;
  //str="my name is pranay";
  reverseit(str);
  return 0;
}
