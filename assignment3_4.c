//
// Accept character from user convert upper case to lower case

#include<stdio.h>
#include<stdbool.h>
int  convert(char ch)
{
    char Ch; 
    if((Ch <=90) && (Ch >=65))
    {
        Ch=Ch+32;
        printf("character is lower case %c\n",Ch);
    }
    else if((Ch <=122) && (Ch >=97))
    {
        Ch=Ch-32;
        printf("character is uppercase %c\n",Ch);
    }


   
    
}
int main()
{
    char cValue='a';
    int iret=false;
    printf("enter the no\n");
    scanf("%c",&cValue);

    convert(cValue);
    return 0;
    
}