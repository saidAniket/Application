//
// Accept two no from user and display first no in second times
//  input : 12   5
//          12   12    12   12    12

#include<stdio.h>
void Display(int iNo,int iNo1)
{
   int iCnt=0;
   for(iCnt=1;iCnt<=iNo1;iCnt++)
   {
    printf("%d\n",iNo);
   }
}
int main()
{
    int iValue=0;
    int iValue1=0;
    printf("enter the no\n");
    scanf("%d",&iValue);

    printf("enter the no\n");
    scanf("%d",&iValue1);


    Display(iValue,iValue1);
    return 0;
}