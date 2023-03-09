////////////////////////////////////
//Count the digit form the Number
//
///////////////////////////////////////////////


#include<stdio.h>
int CountDigit(int iNo)
{
    int iCnt=0;

    if(iNo == 0)
    {
        return 1;   // filter
    }


    if(iNo < 0)
    {
        iNo=-iNo;      // updater  
    }

    while(iNo > 0)
    {
        iNo= iNo / 10;
        iCnt++;
    }

    
    return iCnt;
}
int main()
{
    int iValue=0;
    int iret=0;

    printf("Enter the no\n");
    scanf("%d",&iValue);

    iret=CountDigit(iValue);
    printf("Number of digit are : %d\n",iret);
    return 0;
}