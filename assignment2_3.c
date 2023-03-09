//
// Accept one number from user  if no is less than 10 print  hello otherwise print demo

#include<stdio.h>
void Display(int iNo)
{
    if(iNo > 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("demo\n");
    }
}
int main()
{
    int iValue=0;
    printf("enter the no\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}