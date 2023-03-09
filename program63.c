////////////////////////////////////
//Count the digit form the Number
//Display Even odd digit 
///////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>
int CheckPelindrome(int iNo)
{
    int reverce=0;
    int iDigit=0;
    int iTemp=iNo;
    
    for(reverce =0;iNo !=0;iNo = iNo /10)
    {
        iDigit=iNo % 10;
        reverce= (reverce * 10)+ iDigit;
    }
    
    return (iTemp == reverce);




}
int main()
{
    int iValue=0;
    int iret=0;

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