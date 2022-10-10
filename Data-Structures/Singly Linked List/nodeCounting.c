/*
    Name: Vishal Rathi
    Date : 22 Aug 2020
    Purpose : To count number of nodes present in given SLL
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
int nodeCount(node *);

int main(void)
{
  int totalnodes,count;
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

  //printing the number of nodes in given SLL
  count = nodeCount(start);
  printf("\nnumber of nodes present in linked list is %d",count);

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

//Function that will return the number of node present the SLL
int nodeCount(node *head)
{
    int c=0;
    while(head!=NULL)
    {
        head = head->link;
        c++;
    }
    return c;
}
