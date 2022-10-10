/*
    Name: Vishal Rathi
    Date : 22 Aug 2020
    Purpose : To search the element in the given SLL
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
void search(node*,int);

int main(void)
{
  int totalnodes,item;
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

  //calling the traverse function for traversing of SLL
  traverse(start);

  //Search element in SLL
  printf("\nEnter the element to be searched :");
  scanf("%d",&item);
  search(start,item);

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

//defining the search function
void search(node *start,int element)
{
  node *head = start;
  int count = 1;
  while(head!=NULL)
  {
    if(head->data==element)
    {
      printf("Element found at node no. : %d\n",count);
      return;
    }
    head= head->link;
    count++;
  }
  printf("OOPS! element not found\n");
}