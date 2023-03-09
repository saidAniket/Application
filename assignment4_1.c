//  wAccept no from user and displya factor multiplication of factor
//  12
//  144  (1*2*3*4*6) 
//

#include<stdio.h>

int FactorMulti(int iNo)
{
    int iCnt=0;
    int mult=1;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            mult=mult*iCnt;
            
        }
    }
    return mult;
}
int main()
{
    int iValue=0;
    
    printf("enter the no \n");
    scanf("%d",&iValue);

    int iRet=0;
    iRet=FactorMulti(iValue);

    printf("multiplicaton is %d\n",iRet);
    return 0;
}