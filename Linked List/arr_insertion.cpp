#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
  int n,pos,x,a[100];
  cout<<"Enter the number of elements to be entered: ";
  cin>>n;
  cout<<endl<<"Enter the elements of array: "<<endl;
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  cout<<endl<<"Enter the position and element"<<endl;
  cin>>pos>>x;
  n++;
  for(int i=n;i>=pos; i--)
  {
    a[i]=a[i-1];
  }
  a[pos-1]=x;
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
