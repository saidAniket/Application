/*
    input :  iRow = 3
             icol = 5   

      output:   5   4   3   2   1
                5   4   3   2   1
                5   4   3   2   1
               
                         
                   

*/

#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i=0;
    int j=0;

    for(i=1; i<=iRow; i++)
    {
        for(j=iCol; j>0; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("enter the row \n ");
    scanf("%d",&iValue1);

    printf("enter the col \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}