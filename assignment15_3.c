////////////////////////
//  Accept no from user and check whether tha t no contain 11 in it or not; 
//  input 6
//  elements are : 22  34  45  11 64  54
//
//  output : contain 11 ;
//
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int  Check(int Arr[0],int iSize )
{
    int i=11;
    int iCnt=0;
    for(iCnt=0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == i)
        {
            return true;
        }
        
    }
    
    

}
int main()
{
    int *p=NULL;
    int iLength=0,iCnt=0;
    int iret=false;

    printf("Enter the elements do you want to :\n");
    scanf("%d",&iLength);

    p=(int *)malloc(iLength * sizeof(int));
    if(p == NULL)
    {
        printf("unable to ceate memory\n");
        return -1;
    }

    for(iCnt=0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    
    iret=Check(p,iLength);
    if(iret== true)
    {
        printf("no is present\n");
    }
    else
    {
        printf("no is not present\n");

    }

    free(p);

    
    return 0;
}