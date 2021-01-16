#include<iostream>
#include "bits/stdc++.h"

using namespace std;

int maxx(int a, int b)
{
   return (a>b)?a:b;
}

int LCS(char x[], char y[], int m, int n)
{
	if(m==0 || n==0) return 0;

	if(x[m-1]==y[n-1]) return 1+LCS(x,y,m-1,n-1);

	else
		return maxx(LCS(x,y,m-1,n), LCS(x,y,m,n-1));
}

int main(int argc, char const *argv[])
{

	char x[100],y[100];
	cin>>x>>y;
	int m=strlen(x);
	int n=strlen(y);

	cout<<"The length of longest common subsequence is "<<LCS(x,y,m,n);

	return 0;
}
