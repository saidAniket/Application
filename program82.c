#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int Maximum(int Arr[],int iSize)
{
    
    int iCnt=0;
    int iMax=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int *ptr=NULL;
    int iLength=0,i=0;
    int iret=0;

    //step 1 accept the size of aray
    printf("enter the element do you want to \n");
    scanf("%d",&iLength);

    // step 2 memory allocation of array
    ptr=(int *)malloc(iLength*sizeof(int));

    // Accept the elements from the array
    printf("enter the elements :\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    } 

   
    // step 4 call the function

    iret=Maximum(ptr,iLength);

    printf("Maximum number is :%d\n",iret);

   
    //step 6 deallocate memory 
    free(ptr);

    return 0;

}