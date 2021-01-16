#include "bits/stdc++.h"

using namespace std;

void subarray(int arr[], int n)
{
  int max_till=0;
  int max_here=0,start=0,end=0,s=0;
  for(int i=0;i<n;i++)
  {
    max_here+=arr[i];
    if(max_here>max_till){
      max_till=max_here;
      start=s;
      end=i;
    }

    if(max_here<0)
    {
      max_here=0;
      s=i+1;
    }
  }
  cout<<endl<<"Max sum = "<<max_till;
  cout<<endl<<"The subarray is: ";
  for(int i=start;i<=end;i++)cout<<arr[i]<<" ";

}

int main(int argc, char const *argv[]) {
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  int arr[n];
  cout<<endl<<"Enter the elements: ";
  for(int i=0;i<n;i++)cin>>arr[i];
  subarray(arr,n);
  return 0;
}
