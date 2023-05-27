#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[10];          // static memory

    int size = 0;
    int *ptr = NULL;

    printf("Enter size of Array\n");
    scanf("%d",&size);

    //Step 1 : Allocate the memory
    ptr = (int *)malloc(sizeof(int)*size);

    //Step 3 : Deallocate the memory
    free(ptr);

    return 0;
} 