////////////////////////
//  Accept no from user and product of all elements. 
//  input      6
//  
//  elements are : 22  15  66  85 66  54
//   output   : 100
//
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int   Product(int Arr[0],int iSize )
{
    int iCount=1;
    int iCnt=0;
    for(iCnt=0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) !=0) 
        {
            iCount=iCount * Arr[iCnt];
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
   
    iret=Product(p,iLength);
    printf("product is %d\n",iret);
    
    free(p);

    
    return 0;
}