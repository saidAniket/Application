////////////////////////
//  Accept no from user and accept one another number and return frequency of No 
//  input      6
//    N0=     66
//  elements are : 22  15  45  66 64  54
//   output   : 1 
//
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int  Check(int Arr[0],int iSize,int iNo )
{
    int iCount=0;
    int iCnt=0;
    for(iCnt=0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
          iCount++;  
        }
        
    }
    
    return iCount;

}
int main()
{
    int *p=NULL;
    int iLength=0,iCnt=0;
    int iret=0;
    int iValue=0;

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
    printf("enter the no\n");
    scanf("%d",&iValue);
    
    iret=Check(p,iLength,iValue);

    printf("no of frequency is %d is %d\n",iValue,iret);

    free(p);

    
    return 0;
}