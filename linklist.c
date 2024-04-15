#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First,int ino)
{
    // allocate memory for new node 

    PNODE newn=(PNODE )malloc(sizeof(NODE));

    // initilize the node 

    newn->data=ino;
    newn->next=NULL;

    // if link list contain no node 
    if(*First == NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        *First=newn;
    }

}


void InsertLast(PPNODE First,int ino)
{
    PNODE temp=NULL;
    // allocate memory for new node 

    PNODE newn=(PNODE )malloc(sizeof(NODE));

    // initilize the node 

    newn->data=ino;
    newn->next=NULL;

    // if link list contain no node 
    if(*First == NULL)
    {
        *First=newn;
    }
    else
    {
        temp=*First;
        while (temp->next != NULL)
        {
            temp=temp->next;

        }
        temp->next=newn;
        
    }

}


void DeleteFirst(PPNODE First)
{
    PNODE temp=*First;

    if(temp==NULL)
    {
        return;
    }
    else if(temp->next == NULL)
    {
        free(temp);
        *First=NULL;
    }
    else
    {
        (*First)=temp->next;
        free(temp);   
        
    }

}

void DeleteLast(PPNODE First)
{
     PNODE temp=*First;

    if(temp==NULL)
    {
        return;
    }
    else if(temp->next == NULL)
    {
        free(temp);
        *First=NULL;
    }
    else
    {
        while (temp->next->next !=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
          
        
    }

}

void Display(PNODE First)
{
    int icnt=0;

    while (First !=NULL)
    {
        printf("%d\t",First->data);
        First=First->next;
        
    }
    printf("\n");
}




int main()
{
    struct node *Head=NULL;

    InsertFirst(&Head,11);
    InsertFirst(&Head,12);
    InsertFirst(&Head,13);

    InsertLast(&Head,15);

    Display(Head);

    DeleteFirst(&Head);

    Display(Head);

    Display(Head);

    DeleteLast(&Head);
    Display(Head);


    return 0;
}