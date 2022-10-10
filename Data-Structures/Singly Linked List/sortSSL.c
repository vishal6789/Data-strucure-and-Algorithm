//#include<stdlib.h>
#include<stdio.h>

//creating structure of SLL
struct linkedList
{
  int data;
  struct linkedList *link;
};
typedef struct linkedList node;

//declaring the functions
void traverse(node*);
node *create();
node *sortWhileInsert(node*, node*);

int main()
{
  int totalnodes;
  node *start = NULL, *head = NULL, *new = NULL;

  //taking number of nodes in SLL by the user 
  printf("Enter the number of nodes: ");
  scanf("%d",&totalnodes);

  //creating SLL
  printf("Enter elements of linked list:\n");
  start = create();
  head = start;
  for(int i=2;i<=totalnodes;i++)
  {
    new = create();
    start = sortWhileInsert(start,new);
  }
  //head->link=NULL;

  //calling the traverse function for traversing of SLL
  traverse(start);

  return 0;
}

//Defining the create function which will return the address of new created node
node *create() 
{
  node *next = NULL;
  next = (node *)malloc(sizeof(node));
  if(next == NULL)
  {
    printf("Error!!");
    return NULL;
  }  
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


node *sortWhileInsert(node *start,node *new)
{
    node *ptr = start;
    node *prev = NULL;

    while(1)
    {
        if(ptr==NULL)
        {
            prev->link = new;
            new->link = NULL;
            break;
        }

        if(new->data > ptr->data)
        {
            prev = ptr;
            ptr = ptr->link;
        }
        else
        {
            if(ptr==start)
            {
                new->link = start;
                start = new;
                break;
            }
            else
            {
                new->link = ptr;
                prev->link = new;
                break;
            }
        }
    }
    return start;
}