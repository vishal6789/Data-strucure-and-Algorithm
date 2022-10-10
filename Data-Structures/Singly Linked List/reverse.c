/*
    Name: Vishal Rathi
    Date : 10 Sept 2020
    Purpose : To reverse the given SLL
*/
#include<stdio.h>
#include<stdlib.h>

//creating structure of SLL
struct linkedList
{
  int data;
  struct linkedList *link;
};
typedef struct linkedList node;

//declaring the functions
void traverse(node*);
node *create(void);
node *reverse(node *);

int main(void)
{
  int totalnodes;
  node *start = NULL, *head = NULL;

  //taking number of nodes in SLL by the user 
  printf("Enter the number of nodes: ");
  scanf("%d",&totalnodes);

  //creating SLL
  printf("Enter elements of linked list:\n");
  start = create();
  head = start;
  for(int i=2;i<=totalnodes;i++)
  {
    head->link = create();
    head = head->link;
  }
  head->link=NULL;

  //calling the traverse function for traversing before reverse
  printf("\n Before Reverse - ");
  traverse(start);

  //calling the reverse function
  start = reverse(start);

  //calling traverse function after reverse;
  printf("\n After Reverse - ");  
  traverse(start);
  return 0;
}

//Defining the create function which will return the address of new created node
node *create(void) 
{
  node *next = NULL;
  next = (node *)malloc(sizeof(node));
  scanf("%d",&next->data);//assigning the data given by the user
  return next;
}

//Defining the traverse function which will take base address of SLL as parameter
void traverse(node *start)
{
  node *head = start;
  printf("Elements of linked list are:\n");
  while(head!=NULL)
  {
    printf("%d\t",head->data);
    head = head->link;
  }
} 

//Defining the reverse function which will take base address of SLL and then return the new base address
node *reverse(node *start)
{
  node *p = NULL;
  node *q = start;
  node *r = start->link;

  while(1)
  {
      q->link = p;
      if(r==NULL)
      {
        start->link = NULL;
        start = q;
        break;
      }  
      p = q;
      q = r;
      r = r->link;
  }
  return start;
}
