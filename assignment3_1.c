//
// Accept one number from user  print even factor from that no
//  input:  24
//     2   4   6    8    12 

#include<stdio.h>
void Display(int iNo1)
{
   if(iNo1 < 0)
   {
     iNo1= -iNo1;
   }

    int iCnt=0;
    for(iCnt=1;iCnt<=iNo1/2;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\n",iCnt);
        }
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