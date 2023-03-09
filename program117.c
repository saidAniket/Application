/*
    rows   6
    col    6

    &   &   &   &   &   &
    *   *   *   *   *   *
    *   *   *   *   *   *
    *   *   *   *   *   *
    *   *   *   *   *   *
    &   &   &   &   &   &


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
    if(iRow !=iCol) // jar row ani column vegvegle dile tar
    {
        printf("ROW number and column number are different\n");
        return;
    }

    for(i =1; i <= iRow; i++)
    {
        for(j=1; j<= iCol; j++)
        {
           if((j == 1) || (j == iCol))
            {
                printf("&\t");
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