#include<stdio.h>

int DivideNumber(int iNo1,int iNo2)
{
    int iOutput=0;

    iOutput=iNo1/iNo2;

    return iOutput;
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter first value\n");
    scanf("%d",&iValue1);

    printf("enter second value \n");
    scanf("%d",&iValue2);

    int iRet=0;
    iRet=DivideNumber(iValue1,iValue2);

    printf("Ans is %d\n",iRet);
    return 0;
}