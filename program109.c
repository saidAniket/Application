/*
    rows   4
    col    4

   1    *   *   *
   *    2   *   *
   *    *   3   *
   *    *   *   4


*/ 
#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i=0;
    int j=0;

    if(iRow < 0)
    {
        iRow= -iRow;
    }
    if(iCol < 0)
    {
        iCol= -iCol;
    }

    for(i =1; i <= iRow; i++)
    {
        for(j=1; j<= iCol; j++)
        {
           if(i==j)
           {
                printf("%d\t",i);
           }
           else
           {
                printf("*\t");
           }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("enter the rows \n");
    scanf("%d",&iValue1);

    printf("enter the col \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    
    return 0;
}