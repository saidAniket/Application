////////////////////////////////////
//Count the digit form the Number
//Display Even odd digit
///////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>
int Reversedigit(int iNo)
{
    int reverce=0;
    int iDigit=0;


    if(iNo < 0)
    {
       iNo=-iNo;
    }

    while(iNo > 0)
    {
        iDigit=iNo % 10;
        reverce=(reverce *10)+iDigit;
        iNo= iNo / 10;
    }
    return reverce;
    

}

bool CheckPelindrome(int Data)
{
    int reverce=0;
    reverce=Reversedigit(Data);
    return (reverce == Data);
}
int main()
{
    int iValue=0;
    bool iret=false;

    printf("Enter the no\n");
    scanf("%d",&iValue);

    iret= CheckPelindrome(iValue);
    if(iret== true)
    {
        printf("it is pelindrome\n",iValue);
    }
    else
    {
        printf("it is not pelindrome\n",iValue);
    }
    
    return 0;
}