    ////////////////////////////////////////////////////
    // Question
    // Accept no from user and Display odd factor of its no.
    //
    //////////////////////////////////////////////////////

#include<stdio.h>

void DisplayOddFactor(int iNo)
{

    int iCnt=0;
    for(iCnt=1;iCnt<=(iNo/2);iCnt=iCnt+2) 
    {
        if(((iNo % iCnt)== 0) && (iCnt % 2) !=0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("enter the no\n");
    scanf("%d",&iValue);

    DisplayOddFactor(iValue);
    return 0;
}