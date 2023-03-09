/*
    input :  2 

    output:     2   4   8   10  12  14  16
*/

#include<stdio.h>
void Display(int iNo)

{
    int iCnt=0;
    
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    

    }
}

int main()
{
    int iValue1=0;
   // int iValue2=0;

    printf("enter the num \n ");
    scanf("%d",&iValue1);

    //printf("enter the col \n");
    //scanf("%d",&iValue2);

    Display(iValue1);
    return 0;
}