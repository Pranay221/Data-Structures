#include "bits/stdc++.h"

using namespace std;

int max(int a, int b)
{
	return (a>b)?a:b;
}

int max(int a, int b, int c)
{
	return(max(max(a,b),c));
}

int maxsum(int a[], int l, int m, int h)
{
	int sum=0;
	int left_sum=INT_MIN,right_sum=INT_MIN;

	for(int i=l;i<=m;i++)
	{
		sum+=a[i];
		if(sum>left_sum)left_sum=sum;
	}
	sum=0;
	for(int i=m+1;i<=h;i++)
	{
		sum+=a[i];
		if(sum>right_sum)right_sum=sum;
	}
    return max(left_sum+right_sum, left_sum, right_sum);

}





int maxsubarray(int a[], int l,int h)
{
	//int l=0, h=n-1;

	if(l==h) return a[l];

	int m=(l+h)/2;

	return(max(maxsubarray(a,l,m),maxsubarray(a,m+1,h),maxsum(a,l,m,h)));
}



int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int sum=maxsubarray(a,0,n-1);
    cout<<std::endl<<sum;

	return 0;
}
