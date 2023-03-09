////////////////////////////////////
//Count the digit form the Number
//
///////////////////////////////////////////////


#include<stdio.h>
int SummetionofDigit(int iNo)
{
    int iSum=0;
    int iDigit=0;

    


    if(iNo < 0)
    {
        iNo=-iNo;      // updater  
    }

    while(iNo != 0)
    {
        iSum=iSum + (iNo%10);
        iNo= iNo / 10;
    
    }

    
    return iSum;
}
int main()
{
    int iValue=0;
    int iret=0;

    printf("Enter the no\n");
    scanf("%d",&iValue);

    iret=SummetionofDigit(iValue);
    printf("SummetionofDigit: %d\n",iret);
    return 0;
}