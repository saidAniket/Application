#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd=0;

    printf("please enter the file name you want to create\n");
    scanf("%s",Fname);

    fd=creat(Fname,0777);

    if(fd == -1)
    {
        printf("unable to create the file\n");
        return -1;
    }
    else
    {
        printf("file is successfully created fd %d\n",fd);
    }
    write(fd,"marvolous",10);

    close(fd);

    return 0;
}