////////////////////////
//  Accept no from user and and display such elements which is divisible 3 or 5 
//  input        :   6
//  elements are :   85  66  3   15   93   88
//   output      :   80
//
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int  Occurance(int Arr[0],int iSize )
{
    int iCount=0;
    int iCnt=0;
    for(iCnt=0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 3 ==0))
        {
            printf("Number are: %d\n",Arr[iCnt]);  
        }
            
    }



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
   // printf("Number occurance at %d\n",iret);

    free(p);

    
    return 0;
}