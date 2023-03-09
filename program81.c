#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int CheckOccurance(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    int Frequency=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
            
        }
       
    }
    if(iCnt==iSize)
    {
        return -1;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *ptr=NULL;
    int iLength=0,i=0,iValue=0;
    bool iret =false;

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
    iret=CheckOccurance(ptr,iLength,iValue);

   if(iret== true)
   {
        printf("%d occure in the array\n",iValue);
   }
   else
   {
    printf("there is no %d in the array\n",iValue);
   }
    //step 6 deallocate memory 
    free(ptr);

    return 0;

}