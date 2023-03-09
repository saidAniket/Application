//
// Accept character from user check whether  that character is vowel or not

#include<stdio.h>
#include<stdbool.h>
int  CheckVowel(char ch)
{

    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o')  || (ch == 'u'))
    {
        return true;

    }
    else
    {
        return false;
    }
    
}
int main()
{
    char cValue='a';
    int iret=false;
    printf("enter the no\n");
    scanf("%c",&cValue);

    iret=CheckVowel(cValue);
    if(iret == true)
    {
        printf("is vovel",iret);
    }
    else
    {
        printf("is not vovel",iret);

    }
    return 0;
}