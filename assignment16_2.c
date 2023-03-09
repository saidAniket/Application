////////////////////////
//  Accept no from user and No Occurance of that no 
//  input      6
//    N0=     85
//  elements are : 22  15  45  85 64  54
//   output   : 1 
//
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int  Occurance(int Arr[0],int iSize,int iNo )
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
    
    iret=Occurance(p,iLength,iValue);
    printf("Number occurance at %d\n",iret);

    free(p);

    
    return 0;
}