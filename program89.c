#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo =-iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("enter the number \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}