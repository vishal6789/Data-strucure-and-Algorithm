/*
    Name: Vishal Rathi
    Date : 23 Aug 2020
    Purpose : A program of deletion node when given element is found
              
*/

#include <stdio.h>
#include<stdlib.h>

//Crearting structure of singly linked list
struct linkedList
{
  int data;
  struct linkedList *link;
};
typedef struct linkedList node;

//Declearing the functions 
node *create(void);
void traverse(node *);
node *deletion(node *,int);

int main(void) 
{
  int totalNodes,element;
  node *start=NULL, *head=NULL;

 //taking number of nodes by the user
  printf("Enter number of nodes in linked list: ");
  scanf("%d",&totalNodes);
  printf("Enter elements of linked list :\n");

  //creating singly linked list
  start = create();
  head = start;
  for(int i=2;i<=totalNodes;i++)
  {
    head->link = create();
    head = head->link;
  }
  head->link = NULL;

  //traversing SLL before deletion
  printf("\n Linked list before deletion:\n");
  traverse(start);

  //deletion of node of given element
  printf("\nEnter the element to be deleted: ");
  scanf("%d",&element);
  start = deletion(start, element);

  //traversing of SLL after deletion
  printf("\nLinked List after deletion:\n");
  traverse(start);

  return 0;
}

//Defining the create function 
node *create(void)
{
  node *next = NULL;
  next = (node *)malloc(sizeof(node));
  scanf("%d",&next->data);
  return next;
}

//Defining the traverse function that will take first node address as a perameter
void traverse(node *start)
{
  node *head = start;
  while(head!=NULL)
  {
    printf("%d\t",head->data);
    head = head->link;
  }
}

/*Defining the function deletion 
It will take two parameter - 1st node address, node no. to be deleted
It will return the address of the 1st node
*/
node *deletion(node *start,int element)
{
  node *head = start, *delnode = NULL;

  //If 1st node is to be deleted i.e. n<=0
  if(start->data == element)
  {
    delnode = start;
    start = head->link;
  }
  else
  {
    while(delnode->data!=element && delnode!=NULL)
      {
        head=head->link;
        delnode = head->link;
      }

    // element not found
    if(delnode==NULL)
      printf("\nElement not found");
   
    //if the node 
    else if(delnode->link==NULL)
        head->link = NULL;
    else
        head->link = delnode->link;
  }
  free(delnode);
    delnode = NULL;
    return start;
}
 