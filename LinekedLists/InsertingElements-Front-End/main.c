#include<stdio.h>
#include<stdlib.h>

//Creating the node structure.
//typedef to node_t for easy writing.
typedef struct node {
    int data;
    struct node * link;
} node_t;

node_t* head = NULL; // Creating head node of the linked list.

void insertFront(int x)  //Function for inserting at front of linked list.
{
    node_t* temp;
    temp = malloc(sizeof(node_t));
    if (!head){                 //Entry for Empty Linked list.
        temp->data = x;
        temp->link = NULL;
        head = temp ;
    }
    else{                   //Entry for linked list with elements.
        temp->data = x;
        temp->link = head;
        head = temp ;
    }
}
void insertEnd(int x)   //Function for inserting at end of linked list.
{
    node_t* temp;
    temp = malloc(sizeof(node_t));
    temp->data = x;
    temp->link = NULL;

    if (!head){         //Entry for Empty Linked list.
        head = temp ;
    }
    else{               //Entry for linked list with elements.
        node_t* cur1 = head ;
        node_t* cur2 = head ;
        while(cur1 != NULL){
            cur1 = cur1->link;
            if(cur1 != NULL)
                cur2 = cur2->link;
        }
    cur2->link = temp;
    }
}
 void print(void) //Function for printing contents of linked list.
{
    node_t* cur = head ;
    printf("List is :");
    while(cur != NULL)
    {
        printf(" %d ",cur->data);
        cur = cur->link;
    }
}


void main()
{
    int i,n,x;
    printf("Enter no of data : ");
    scanf("%d",&n);

    for(i = 0;i < n ; ++i)
    {
        printf("\nEnter %d data : ",i+1);
        scanf("%d",&x);
        insertFront(x);        //Comment either this line or the next line for corresponding operation.
        //insertEnd(x);
        print();
    }


}
