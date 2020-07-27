#include <stdio.h>
#include <conio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
struct node *prev;
};

struct node *start = NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *del_beg(struct node *);
struct node *del_end(struct node *);

int main()
{
  int option;
  do
  {
    printf("\n\n MAIN MENU ****");
    printf("\n1. Create a List");
    printf("\n2. Display the list");
    printf("\n3. Add a node at the beginning");
    printf("\n4. Add a node at the end");
    printf("\n5. Delete a node from start");
    printf("\n6. Delete a node from the end");
    printf("\n7. Exit");
    printf("\n\nEnter your option: ");
    scanf("%d",&option);
    switch(option)
    {
      case 1:start=create(start);
             printf("\nList created\n");
             break;
      case 2:start=display(start);
             break;
      case 3:start=insert_beg(start);
             break;
      case 4:start=insert_end(start);
             break;
      case 5:start=del_beg(start);
             break;
      case 6:start=del_end(start);
             break;
      case 7:printf("Thanks!!");
            break;
      default:printf("\nInvalid choice!!!");
    }
  }while(option!=7);


  return 0;
}

struct node *create(struct node *start)
{
  struct node *newnode, *ptr;
  int num;
  printf("\nEnter the data: ");
  scanf("%d", &num);
  while(num!= -1)
  {
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    if(start==NULL)
    {
      newnode->next=NULL;
      newnode->prev=NULL;
      start=newnode;
    }
    else
    {
      ptr=start;
      while(ptr->next!=NULL)
      {
        ptr=ptr->next;

      }
      ptr->next=newnode;
      newnode->prev=ptr;
      newnode->next=NULL;

    }
    printf("\nEnter the data : ");
    scanf("%d",&num);

  }
  return start;

}

struct node *display(struct node *start)
{
  struct node *ptr;
  ptr=start;
  while(ptr!=NULL)
  {
    printf("%d ",ptr->data);
    ptr=ptr->next;
  }
  return start;
}

struct node *insert_beg(struct node *start)
{
  struct node *newnode;
  int num;
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter the value: ");
  scanf("%d",&num);
  newnode->data=num;
  newnode->next=start;
  start->prev=newnode;
  newnode->prev=NULL;
  start=newnode;
  return start;
}

struct node *insert_end(struct node *start)
{
  struct node *newnode, *ptr;
  int num;
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter the value: ");
  scanf("%d",&num);
  newnode->data=num;
  newnode->next=NULL;
  ptr=start;
  while(ptr->next!=NULL)
  ptr=ptr->next;
  ptr->next=newnode;
  newnode->prev=ptr;
  return start;

}

struct node *del_beg(struct node *start)
{
  struct node *ptr;
  ptr=start;
  start=start->next;
  start->prev=NULL;
  free(ptr);
  return start;
}

struct node *del_end(struct node *start)
{
  struct node *ptr;
  ptr=start;
  while(ptr->next!=NULL)
  {
    ptr=ptr->next;
  }
  ptr->prev->next=NULL;
  free(ptr);
  return start;
}
