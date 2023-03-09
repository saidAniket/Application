////////////////////////////////////
//Count the digit form the no 
//
///////////////////////////////////////////////
#include<stdio.h>
int CountDigit(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    
    if(iNo < 0)
    {
        iNo=-iNo;      // updater  
    }

    while(iNo > 0)
    {
        iDigit =iNo % 10;
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