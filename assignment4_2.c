//  Accept no from user and displya fator in decending order
//  12
//  6  3  2  1 
//

#include<stdio.h>

void FactorMulti(int iNo)
{
    int iCnt=0;
    int mult=1;

    for(iCnt=iNo;iCnt>0;iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
            
        }
    }
    
}
int main()
{
    int iValue=0;
    
    printf("enter the no \n");
    scanf("%d",&iValue);

   // int iRet=0;
    FactorMulti(iValue);

   // printf("multiplicaton is %d\n",iRet);
    return 0;
}