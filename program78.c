#include<stdio.h>
#include<stdlib.h>

int CalculateFrequency(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    int Frequency=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            Frequency++;
            
        }
       
    }
    return Frequency;
}

int main()
{
    int *ptr=NULL;
    int iLength=0,i=0,iret=0,iValue=0;

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

    printf("enter the element to find frequency\n");
    scanf("%d",&iValue);

    // step 4 call the function
    iret=CalculateFrequency(ptr,iLength,iValue);

    printf("frequency are :%d is %d\n",iValue,iret);

    //step 6 deallocate memory 
    free(ptr);

    return 0;

}