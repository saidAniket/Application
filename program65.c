////////////////////////////////////
// check maximum digit from the number
//
///////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>
int CheckMaxDidit(int iNo)
{
    
    int iDigit=0;
    int iMax=0;
    
    while(iNo > 0)
    {
        iDigit=iNo % 10;
        if(iDigit > iMax)
        {
            iMax=iDigit;
        }
        if(iMax == 9)
        {
            break;
        }
        
        iNo=iNo/10;
    }
    return iMax;

}


int main()
{
    int iValue=0;
    int iret=0;

    printf("Enter the no\n");
    scanf("%d",&iValue);

    iret= CheckMaxDidit(iValue);
    printf("Maximum digit are %d\n",iret);
   
    
    return 0;
}