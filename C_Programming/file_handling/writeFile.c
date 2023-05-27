#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>


int main()
{
    char Name[30];
    int FD = 0;
    char Data[] = "India is my contry";

    printf("Enter file name that you want to use: \n");
    scanf("%s",Name);

    if(FD == -1)
    {
        return-1;
    }
    else
    {
        printf("Note : File opened.\n");
    }

    FD = open(Name,O_RDWR);
    
    read (FD, Data,19);

    close(FD);


    return 0;
}