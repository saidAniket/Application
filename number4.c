// Display even factors 


#include<stdio.h>
void DisplayFactor(int ino)
{
    int iCnt=0;

    for(iCnt=1;iCnt<ino;iCnt++)
    {
        if(ino % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int ino1;
    printf("enter the number \n");
    scanf("%d",&ino1);



    DisplayFactor(ino1);

    return 0;
}