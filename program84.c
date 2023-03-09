#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void DisplayReverce(int Arr[],int iSize)
{
    
    int iCnt=0;

    for(iCnt=iSize-1;iCnt>=0;iCnt--)
    {
        printf("\n%d\n",Arr[iCnt]);
    }
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

    DisplayReverce(ptr,iLength);


    //step 6 deallocate memory 
    free(ptr);

    return 0;

}