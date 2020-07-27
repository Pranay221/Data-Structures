#include <iostream>
using namespace std;
int result=1;
int factorial(int);

int main(int argc, char const *argv[])
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  cout<<endl;
  cout<<endl<<"The factorial of the number is: "<<factorial(n)<<endl<<endl;
  
  return 0;
}

int factorial(int n)
{
 if(n<=1)
 {
   result=1;
   cout<<result<<endl;
 }
 else
 {
   result=n*factorial(n-1);
   cout<<result<<endl;
 }

 return result;

}
