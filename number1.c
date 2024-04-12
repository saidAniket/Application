#include<stdio.h>

// Display table   10  
//  5  10  15   20  25   30  35   40  45   50

void DisplayTable(int ino)
{

    int iCnt=0; int isum=0;

    for(iCnt=1;iCnt<10;iCnt++)
    {
        printf("%d\t",iCnt*ino);
    }

    
}
int main()
{
    int ino=5;

    DisplayTable(ino);

    
    return 0;
}



