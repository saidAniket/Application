

#include<stdio.h>
#include<stdlib.h>

int Summesation(int Data[],int iSize)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Data[iCnt];

    }
    return iSum;
}

int main()
{
    int *ptr=NULL;
    int iCnt=0,iLength=0,iret=0,i=0;

    printf("enter the no do you wabt to store : \n");
    scanf("%d",&iLength);

    ptr =(int *)malloc(iLength*sizeof(int));



    printf("enter the elements : \n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("elements are: \n");
    {
        for(i=0; i<iLength; i++)
        {
            printf("%d\n",ptr[i]);
        }
    }

    iret=Summesation(ptr,iLength);
    printf("Addition of elements are :%d\n",iret);
    free(ptr);

    return 0;

}
