#include "bits/stdc++.h"

using namespace std;

bool sortbyfirstasc(pair<int, int>&a,pair<int, int>&b )
{
  return (a.first<b.first);
}

int main(int argc, char const *argv[]) {

vector<pair <int,int> >v;

int arr[20],arrx[20];
int n;
cin>>n;
for(int i=0;i<n;i++)cin>>arr[i];
for(int i=0;i<n;i++)cin>>arrx[i];

for(int i=0;i<n;i++)v.push_back(make_pair(arr[i],arrx[i]));

cout<<"Before sort"<<endl;
for(int i=0;i<n;i++)
{
  cout<<v[i].first<<" "<<v[i].second<<endl;
}
sort(v.begin(), v.end(), sortbyfirstasc);
cout<<"After sorting"<<endl;
for(int i=0;i<n;i++)
{
  cout<<v[i].first<<" "<<v[i].second<<endl;
}
  return 0;
}
