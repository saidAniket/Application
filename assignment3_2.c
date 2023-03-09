//
// Accept one number from user  print factor of that no
//  input:  2
//     2   4   6    8    10   12   14    16 

#include<stdio.h>
void Display(int iNo1)
{
   if(iNo1 < 0)
   {
     iNo1= -iNo1;
   }

    int iCnt=0;
    for(iCnt=1;iCnt<=8;iCnt++)
    {
       
            printf("%d\n",iCnt*iNo1);
        
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