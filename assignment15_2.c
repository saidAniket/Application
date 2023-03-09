////////////////////////
//  Accept no from user and return Differenc between frequency of even or odd number 
//  input 6
//  elements are : 22  34  45  47 64  54
//  output : even number is  : 4
//           0dd number is  : 2
//
//  Difference between even no and odd no : 2
//
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CouentEven(int Arr[0],int iSize )
{
    int iCnt=0,iEvenCount=0,iOddCount =0;
    for(iCnt=0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2)== 0)
        {
            iEvenCount ++;
        }
        else
        {
            iOddCount ++;
        }
    }
    printf("Frequency of Even no %d\n",iEvenCount);
    printf("Frequency of odd no %d\n",iOddCount);

    printf("difference of no %d\n",iEvenCount-iOddCount);


    

}
int main()
{
    int *p=NULL;
    int iLength=0,iret=0,iCnt=0;

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
    
    CouentEven(p,iLength);
   // printf(" Even number are %d\n",iret);

    free(p);

    
    return 0;
}