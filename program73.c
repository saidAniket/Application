#include<stdio.h>
#include<stdlib.h>

// perform the o[eration on array
//
{
    //logic
}

int main()
{
    int *ptr=NULL;
    int iCnt=0,iLength=0;
    float iret=0;
    int i=0;

    printf("enter the no do you wabt to store : \n");
    scanf("%d",&iLength);

    // allocate the memory for array
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

    // call the function
    ______=____________(ptr,iLength);
    
    // deallocate  the memory
    free(ptr);

    return 0;

}
