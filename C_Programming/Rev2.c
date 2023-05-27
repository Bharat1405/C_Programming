#include<stdio.h>

int Multiply(int A, int B)
{
    int Ans = 0;

    Ans = A * B;

    return Ans;
}

int main()
{
    int No1 = 10;
    int No2 = 11;

    int Ret = 0;

    Ret = Multiply(No1, No2);

    printf("Product : %d\n",Ret);



    return 0;
}












//int A = 11;             // Normal Glass     20 



//short int B = 11;       // Half glass       15



//long int C = 11;        // Jumbo glass      30