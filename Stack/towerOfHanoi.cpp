#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from, char to, char aux)
{
	if (n == 1)
	{
		cout << "Move disk 1 from rod " << from << " to rod " << to<<endl;
    return;
	}
	towerOfHanoi(n - 1, from, aux, to);
	cout << "Move disk " << n << " from rod " << from << " to rod " << to << endl;
	towerOfHanoi(n - 1, aux, to, from);
}

int main()
{
	int n;
  cout<<"Enter the number of disks to be moved: ";
  cin>>n; cout<<endl;
	towerOfHanoi(n, 'A', 'C', 'B');
	return 0;
}
