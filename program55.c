////////////////////////////////////
//Count the digit form the Number
//Display Even odd digit
///////////////////////////////////////////////


#include<stdio.h>
void DisplayEvenOddDigit(int iNo)
{
    int iEvenDigit=0;
    int iOddDigit=0;
    int iDigit=0;


    if(iNo == 0)
    {
        printf("even digit are : 1\n");
         printf("odd digit are : 0\n"); 
    }

    while(iNo != 0)
    {
        iDigit=iNo % 10;
        if(iDigit %2 ==0)
        {
            iEvenDigit ++;
        }
        else
        {
            iOddDigit++;
        }
        iNo= iNo / 10;
    }

    printf("even digit are : %d\n",iEvenDigit ); 
    printf("odd digit are : %d\n",iOddDigit ); 

}
int main()
{
    int iValue=0;
    int iret=0;

    printf("Enter the no\n");
    scanf("%d",&iValue);

    DisplayEvenOddDigit(iValue);
    
    return 0;
}