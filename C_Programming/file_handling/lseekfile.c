#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>


int main()
{
    char Name[30];
    int FD = 0;
    char Data[] = "\0";

    printf("Enter file name that you want to use: \n");
    scanf("%s",Name);

    if(FD == -1)
    {
        return-1;
    }
    else
    {
        printf("File opened.\n");
    }
    FD = open(Name,O_RDWR);
    
    lseek(FD,9,SEEK_SET);

    read (FD, Data,10);

    write(1,Data,10);

    close(FD);


    return 0;
}