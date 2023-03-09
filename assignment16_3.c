////////////////////////
//  Accept no from user and No Occurance of that no 
//  input      6
//   
//  elements are : 22  15  66  85 66  54
//   output   : 4
//
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int  Occurance(int Arr[0],int iSize,int iNo )
{
    int idigit=0,iCount=0;
    int iCnt=0;
    for(iCnt=0;iCnt < iSize;iCnt++)
    {
        while(iNo !=0)
        {
            idigit=Arr[iCnt] %10;
            if(idigit == iNo)
            {
                iCount++;
            }
            Arr[iCnt]/10;
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
    if(iret == -1)
    {
        printf("there is no such number \n");
    }
    else
    {
        printf("Number occurance at %d\n",iret);
    }
    free(p);

    
    return 0;
}