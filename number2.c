#include<stdio.h>

void DisplayReverse(int ino)
{
    int iCnt=0;

    for(iCnt=ino;iCnt>0;iCnt--)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int inumber=5;

    DisplayReverse(inumber);

    return 0;
}
