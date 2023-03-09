#include<stdio.h>
#include<stdlib.h>

int Counteven(int Arr[],int iSize)
{
    int iCnt=0;
    int iEvenCnt=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt] % 2)== 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int *ptr=NULL;
    int iLength=0,i=0,iret=0;

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
    iret=Counteven(ptr,iLength);
    printf("number of even elements are :%d\n",iret);

    //step 6 deallocate memory 
    free(ptr);

    return 0;

}