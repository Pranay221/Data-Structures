#include "iostream"
#include "string.h"
#define MAX 10
using namespace std;

int top=-1;
int stk[MAX];
void push(char);
char pop();

int main(int argc, char const *argv[]) {
  char str[MAX],temp;
  int flag=1;
  cout<<"Enter the Expression: ";
  cin>>str;
  for(int i=0;i<strlen(str);i++){
    if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
      push(str[i]);
    }
    if(str[i]==')' || str[i]==']' || str[i]=='}'){
      if(top==-1){
        flag=0;
      }
      else{
        temp=pop();
        if(temp=='(' && (str[i]=='}' || str[i]==']'))
        flag=0;
        if(temp=='{' && (str[i]==')' || str[i]==']'))
        flag=0;
        if(temp=='[' && (str[i]=='}' || str[i]==')'))
        flag=0;
      }
    }
  }
  if(flag==1){
    cout<<"\n\nVALID EXPRESSION!!";
  }
  else{
    cout<<"\n\nInvalid Expression!!";
  }
  return 0;
}

void push(char c){
  if(top== MAX-1){
    cout<<"\n\nStack Overflow!!!";
  }
  else{
    top=top+1;
    stk[top]=c; //could have used stk[++top] by eliminating the above line.
  }
}

char pop(){
  if(top== -1){
    cout<<"\n\nStack Underflow!!!";
  }
  else{
    return stk[top--];
  }
}
