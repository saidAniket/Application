//
// Accept one number from user  print that number on screen 

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
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