#include<stdio.h>
#include<stdlib.h>
int CheckOccurance(int Arr[0], int iSize, int iNo)
{
    int iCnt=0;
    int ipos=-1;
    for(iCnt=0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            ipos=iCnt;
        }
    }
    return ipos;

}
int main()
{
    int *ptr=NULL;
    int iLength=0;int i=0;int iValue=0;
    int iRet=0;

    // step first Access size of Array;

    printf("Enter the no do yoou want to \n");
    scanf("%d",&iLength);

    // allocate the memory
    ptr=(int *)malloc(iLength * sizeof(int));


    // step 2: access the elements of array

    for(i=0; i < iLength; i++ )
    {
        scanf("%d",&ptr[i]);
    }

    printf("enter the value \n");
    scanf("%d",&iValue);

    // call the function 
    iRet=CheckOccurance(ptr,iLength,iValue);
    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else 
    {
        printf("%d Occures in the array at the last index %d\n",iValue);

    }

    // Deallocate memory

    free(ptr);
    
    return 0;
}