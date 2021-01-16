#include "bits/stdc++.h"

using namespace std;

int maxx(int a, int b)
{
	return (a>b)?a:b;
}

int LCS(char x[], char y[], int m, int n)
{

	int L[m+1][n+1],i , j;

	for(i=0;i<=m;i++)
	{
		for ( j = 0; j <= n; ++j)
		{
			if(i==0 || j==0) L[i][j]=0;

			else if(x[i-1]==y[j-1]) L[i][j]=1+L[i-1][j-1];

			else
				L[i][j]=maxx(L[i-1][j],L[i][j-1]);
		}
	}

	return L[m][n];


}


int main(int argc, char const *argv[])
{
	char x[100],y[100];
	cout<<"Enter first string: ";
	cin>>x;
	cout<<endl<<"Enter second string: ";
	cin>>y;
    int m=strlen(x);
    int n=strlen(y);
	cout<<endl<<"The length of LCS is: "<<LCS(x,y,m,n);
	return 0;
}
