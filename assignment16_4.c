////////////////////////
//  Accept no from user and accept range ,display all elements from that range 
//  input      6
//   star   : 60
//   end    : 90
//  elements are : 22  15  66  85 66  54
//   output   : 66  85  66
//
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void  Range(int Arr[0],int iSize )
{
    int iStart=60;
    int iEnd=90;
    int iCnt=0;
    printf("\n_____________________________________________\n");
    for(iCnt=0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d\n",Arr[iCnt]);
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
   
    Range(p,iLength);
    
    free(p);

    
    return 0;
}