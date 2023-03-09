////////////////////////////////////
//Count the digit form the Number
//Display Even odd digit
///////////////////////////////////////////////


#include<stdio.h>
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
int main()
{
    int iValue=0;
    int iret=0;

    printf("Enter the no\n");
    scanf("%d",&iValue);

    iret= Reversedigit(iValue);
    printf("reverse  digit display %d\n",iret);
    
    return 0;
}