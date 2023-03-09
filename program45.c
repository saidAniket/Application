    ////////////////////////////////////////////////////
    // Question
    // Accept no from user and Display ODD factor of its no.
    // for chi i++ chi condition
    //////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{

    int iCnt=0;
    for(iCnt=1;iCnt<=(iNo/2);iCnt+=2)  //     iNo/2 = complexity is n/2
    {
        
        if((iNo % iCnt)== 0)
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

    Display(iValue);
    return 0;
}