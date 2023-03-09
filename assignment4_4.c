//  Accept no from user and displya non  Factor no addition
//  12
//  5   7    8   9    10     11
//  =50
//

#include<stdio.h>

int AdditionSumFact(int iNo)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo % iCnt !=0)
        {
            iSum=iSum+iCnt;
            
        }
    }
    return iSum;
}
int main()
{
    int iValue=0;
    
    printf("enter the no \n");
    scanf("%d",&iValue);

    int iRet=0;
    
    iRet=AdditionSumFact(iValue);

    printf("addition  is %d\n",iRet);
    return 0;
}