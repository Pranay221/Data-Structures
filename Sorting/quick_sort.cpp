#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int h)
{
  int i,j,pivot;
  i=l;
  j=h;
  pivot=a[l];
  while(i<j)
  {
    do
    {
      i++;
    } while(a[i]<=pivot);

    do
    {
      j--;
    } while(a[j]>pivot);
    if(i<j)
    {
      swap(a[i],a[j]);
    }
  }
  swap(a[l],a[j]);
  return j;
}

void quicksort(int a[], int l, int h)
{
  int j;
  if(l<h)
  {
    j=partition(a,l,h);
    quicksort(a,l,j);
    quicksort(a,j+1,h);
  }
}

int  main(int argc, char const *argv[])
{
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  cout<<endl<<endl;
  int a[n];
  cout<<"Enter the elements: "<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  quicksort(a,0,n);
  cout<<endl<<"The sorted array is: "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<endl;
  }
  return 0;
}
