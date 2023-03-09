////////////////////////
//  Accept no from user and and return difference between summesion of even elements and summetion od odd elements 
//  input      6
//  elements are : 85  66  3   80   93   88
//   output   : 53(234-181)
//
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int  Occurance(int Arr[0],int iSize )
{
    int iEvenCount=0;
    int iOddCount=0;
    int iCnt=0;
    for(iCnt=0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] %2 == 0)
        {
            iEvenCount=iEvenCount + Arr[iCnt];   
        }
        if(Arr[iCnt] % 2  !=0)
        {
            iOddCount=iOddCount + Arr[iCnt];
        }
        
    }

    printf("Summesion of Even number:%d\n",iEvenCount);
    printf("Summetion of odd number:%d \n",iOddCount);
    printf("Summetion of odd number:%d \n",iEvenCount - iOddCount);
    

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
    
    
    iret=Occurance(p,iLength);
    //printf("Number occurance at %d\n",iret);

    free(p);

    
    return 0;
}