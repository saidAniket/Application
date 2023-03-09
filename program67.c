////////////////////////////////////
// check maximum digit from the number
//
///////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>
int CheckMaxDidit(int iNo)
{
    
    int iDigit=0;
    int iMin=9;
    
    while(iNo > 0)
    {
        iDigit=iNo % 10;
        if(iDigit < iMin)
        {
            iMin=iDigit;
        }
         if(iMin == 0)
        {
            break;
        }
        iNo=iNo/10;
    }
    return iMin;

}


int main()
{
    int iValue=0;
    int iret=0;

    printf("Enter the no\n");
    scanf("%d",&iValue);

    iret= CheckMaxDidit(iValue);
    printf("Minimum digit are %d\n",iret);
   
    
    return 0;
}