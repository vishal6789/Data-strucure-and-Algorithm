/*
    Name: Vishal Rathi
    Date : 22 Aug 2020
    Purpose : A program of insertion of node after node number in given SLL
              if number <=0 new node will be insert at the starting of SLL
              if number >= total node then new node will be assign to the end of the list
              else new node will be insert at the between of the list
*/
#include <stdio.h>
#include <stdlib.h>

//Defining the structure of singly linked list
struct linkedList
{
    int data;
    struct linkedList *link;
};

typedef struct linkedList node;

//declaring the functions
node *create(void);
node *insertion(node *,int);
void traverse(node *);

int main()
{
    int totalNodes,number;
    node *start=NULL, *head=NULL;

    //taking total nodes from the user
    printf("Enter total number of nodes: ");
    scanf("%d",&totalNodes);
    printf("Enter elements:\n");

    //Creating Singly linked list
    start = create();
    head = start;
    for(int i=2;i<=totalNodes;i++)
    {
        head->link = create();
        head = head->link;
    }
    head->link = NULL;

    //taking node number after which element is to be inserted
    printf("Enter the number after which element is to be inserted: ");
    scanf("%d",&number);
    printf("Enter the value of element:");

    //Inserting after node number num
    start = insertion(start,number);

    //Traversing the SLL
    traverse(start);
    
    return 0;
}

//function which create nodes and return the address of created new node
node *create(void)
{
    node *next;
    next = (node *)malloc(sizeof(node));
    scanf("%d",&next->data);
    return next;
}

//function to traverse the SLL
void traverse(node *start)
{
    node *head = start;
    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head = head->link;
    }
}

//function that will insert the new node after element n
//it will return the base address of start node of SLL
node *insertion(node *start,int n)
{
    node *head = start;
    node *newnode = NULL;

    //if insertion at the starting of SLL
    if(n<=0)
    {
        newnode = create();
        newnode->link = start;
        start = newnode;
    }
    else
    {
        for(int i=1 ;i<n && head->link!=NULL ;i++)
            head = head->link;

        //insertion of node at the end of SLL
        if(head->link==NULL)
        {
            newnode = create();
            head->link = newnode;
            newnode->link = NULL;
        }

        //Insertion of node at the middle of singly linked list
        else
        {
            newnode = create();
            newnode->link = head->link;
            head->link = newnode;
        }
    }

    //returning the base address of 1st node of SLL
    return start;
}