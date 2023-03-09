/*
    input :  5 

    output: #   A    *  #   B    *   #   C   *   #   D   *   #   E    *
*/

#include<stdio.h>
void Display(int iNo)

{
    int iCnt=0;
    char ch='A';
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t%c\t*\t",ch);
    
        ch++;
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