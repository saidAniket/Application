// 4
// 
//   1   2   3   4   *   *    *     *


#include<stdio.h>
void Display(int iNo)
{
     int iCnt=0;
    if(iNo < 0)
    {
        iNo =-iNo;
    }
    for(iCnt=1; iCnt <=iNo; iCnt++)
    {
        printf("%d\t",iCnt);   // variable data
            
    }
     for(iCnt=1; iCnt <=iNo; iCnt++)
    {
    
        printf("*\t");          // fixed data
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("enter the number \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}