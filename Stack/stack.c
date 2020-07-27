#include <stdio.h>
#include <conio.h>
#include<malloc.h>
#include<stdlib.h>

struct stack
{
int data;
struct stack *next;
};

struct stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *pop(struct stack *);
int peek(struct stack *);
struct stack *display(struct stack *);

int main()
{
  int option,val;
  do
  {
    printf("\n\n MAIN MENU ****");
    printf("\n1. Push");
    printf("\n2. Display");
    printf("\n3. Pop");
    printf("\n4. Peek");
    printf("\n5. Exit");
    printf("\n\nEnter your option: ");
    scanf("%d",&option);
    switch(option)
    {
      case 1:printf("\nEnter the value to be pushed on stack: ");
             scanf("%d",&val);
             top=push(top,val);
             break;
      case 2:top=display(top);
             break;
      case 3:top=pop(top);
             break;
      case 4:val=peek(top);
             if (val==-1)
             {
               printf("\n\nStack is empty!!!");
             }
             else
             {
               printf("\n\nThe value on top of stack is: %d",val);
             }
             break;
      case 5:printf("Thanks!!");
             break;
      default:printf("\nInvalid choice!!!");
    }
  }while(option!=5);


  return 0;
}

struct stack *push(struct stack *top,int val)
{
  struct stack *ptr;
  ptr=(struct stack *)malloc(sizeof(struct stack));
  ptr->data=val;
  if(top==NULL)
  {
    ptr->next=NULL;
    top=ptr;
  }
  else
  {
    ptr->next=top;
    top=ptr;
  }
  return top;

}

struct stack *pop(struct stack *top)
{
  struct stack *ptr;
  ptr=top;
  if(top==NULL) printf("\nStack Underflow");
  else
  {
    top=top->next;
    printf("\n\nValue being deleted is :  %d",ptr->data);
    free(ptr);

  }

  return top;
}

struct stack *display(struct stack *top)
{
  struct stack *ptr;
  ptr=top;
  if(top==NULL) printf("\n\nStack is empty!!!");
  else
  {
    while(ptr!=NULL)
    {
      printf("%d ",ptr->data);
      ptr=ptr->next;
    }
  }

  return top;
}

int peek(struct stack *top)
{
  if (top==NULL)
  {
    return -1;
  }
  else
  {
    return top->data;
  }

}
