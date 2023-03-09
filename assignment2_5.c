//
// Accept one number from user  and Display first number in second no of times

#include<stdio.h>
void Display(int iNo1)
{
   if(iNo1 % 2 == 0)
   {
    printf("number is even\n");
   }
   else
   {
    printf("nimber is odd\n");
   }
}
int main()
{
    int iValue=0;
    int iValue1=0;
    printf("enter the no\n");
    scanf("%d",&iValue);


    Display(iValue);
    return 0;
}