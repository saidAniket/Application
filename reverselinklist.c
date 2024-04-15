#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct  node *next;
    
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First,int iNo)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;

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

void Reverse(PPNODE First)
{
    PNODE current=*First;

    PNODE prev=NULL;
    PNODE next=NULL;

    while (current !=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }

    *First=prev;
    
}

void Display(PNODE First)
{
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

    InsertFirst(&Head,10);
    InsertFirst(&Head,9);
    InsertFirst(&Head,8);
    InsertFirst(&Head,7);
    InsertFirst(&Head,6);

    Display(Head);

    Reverse(&Head);

    Display(Head);


    return 0;
}