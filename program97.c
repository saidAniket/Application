// 4
// 
//   A   B   C    D
// ASCII
// American standard code for information interchange

#include<stdio.h>
void Display(int iNo)
{
     int iCnt=0;
     char ch='A';
    if(iNo < 0)
    {
        iNo =-iNo;
    }
    for(iCnt=1; iCnt <=iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
        
            
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