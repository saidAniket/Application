#include<stdio.h>
int sum(int A)
{

    int iCnt=0; int isum=0;

    for(iCnt=1;iCnt<=A;iCnt++)
    {
        isum=iCnt+isum;
    }

    return isum; 
}
int main()
{
    int ino=5;

    int iret=sum(ino);

    printf("Addition is : %d\n",iret);
    return 0;
}