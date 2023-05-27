#include<stdio.h>

void fun()
{
    static long int i = 1;

    printf("%d\n",i);

    i++;

    fun();
}

int main()
{

    fun();


    return 0;
}












//int A = 11;             // Normal Glass     20 



//short int B = 11;       // Half glass       15



//long int C = 11;        // Jumbo glass      30