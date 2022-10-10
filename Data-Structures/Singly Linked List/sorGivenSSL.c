/* 
Authour : Vishal Rathi
Date : 30 sept 2020
Purpose : To sort the given SLL
*/

#include <stdio.h>
#include<stdlib.h>
#include<assert.h>

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
node *sort(node *);
node *swap(node *,node *,node *);
void freeSLL(node *);

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
    if(head->link == NULL)
      printf("\noverflow\n");
    head = head->link;
    }
  //head->link=NULL;

  //traversing SLL before sorting
  printf("\nGiven singly Linked List :\n");
  traverse(start);

  //calling the sort function
  start = sort(start);

  //traversing SLL after sorting
  printf("\nSorted singly Linked List :\n");
  traverse(start);
  
  freeSLL(start);
  return 0;
}

//Defining the create function which will return the address of new created node
node *create(void) 
{
  node *next = NULL;
  next = malloc(sizeof(node));
  if(next == NULL)
    return NULL;
  next->link = NULL;  
  scanf("%d",&next->data);//assigning the data given by the user
  return next;
}

//Defining the traverse function which will take base address of SLL as parameter
void traverse(node *start)
{
  assert(start!=NULL);
  node *head = start;
  while(head!=NULL)
  {
    printf("%d\t",head->data);
    head = head->link;
  }
} 

//It take starting address of SLL as argument and return the same 
node *sort(node *start)
{
  assert(start!=NULL);
  node *end = NULL;
  node *prev = NULL;
  node* head = NULL; 

  //Applying bubble sort
  while(start->link != end)
  {
    head = start;
    prev = NULL;

    while(head->link != end)
    {
      if(head->data > head->link->data)
      {
        //prev = prev->link;
        start = swap(prev, head, start);
        if(prev == NULL)
          prev = start;
        else          
          prev = prev->link;
        continue;
      }
      prev = head;
      head = head->link;
    }
    end = head;
  } 
  return start;
}


node *swap(node *prev, node *head, node *start)
{
  assert(start!=NULL);
  node *next = NULL;
  next = head->link;
  head->link = next->link;
  next->link = head;

  //swaping starting first two node 
  if(prev == NULL)
    start = next;
  //swapping other nodes 
  else 
    prev->link = next;

  return start;
}

//Defining the free function that will take 1st node address as input and delete the whole SLL
void freeSLL(node *start)
{
  assert(start!=NULL);
  node *head = start;
  node *delnode = head;
  while(head!=NULL)
  {
    head = head->link;
    free(delnode);
    delnode  = head;
  }
}