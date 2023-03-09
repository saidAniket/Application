//  Accept no from user and displya non  Factor no addition
//  12
//  5   7    8   9    10     11
//  =50
//

#include<stdio.h>

int AdditionSumFact(int iNo)
{
    int iCnt=0;
    int iodd=0;int iEven=0;
    int Difference;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo %2 ==0)
        {
            iEven=iEven+iCnt;
        }
        else if(iNo %2 !=0)
        {
            iodd=iodd+iCnt;
        }
    }

   Difference=iodd-iEven;
   return Difference;
    
    
}
int main()
{
    int iValue=0;
    
    printf("enter the no \n");
    scanf("%d",&iValue);

    int iRet=0;
    
    iRet=AdditionSumFact(iValue);

    printf("difference  is %d\n",iRet);
    return 0;
}