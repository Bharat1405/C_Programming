#include<stdio.h>

int main()
{
    char c = 'A';
    int no = 11;
    float f = 90.99f;
    double d = 90.8967;

    printf("Value of A: %c\n",c);
    printf("Value of no: %d\n",no);
    printf("Value of f: %f\n",f);
    printf("Value of d: %f\n\n",d);
    
    printf("Address of A: %d\n",&c);
    printf("Address of no: %d\n",&no);
    printf("Address of f: %d\n",&f);
    printf("Address of d: %d\n\n",&d);

    printf("Size of A: %d\n",sizeof(c));
    printf("Size of no: %d\n",sizeof(no));
    printf("Size of f: %d\n",sizeof(f));
    printf("Size of d: %d\n\n",sizeof(d));


    return 0;
}












//int A = 11;             // Normal Glass     20 



//short int B = 11;       // Half glass       15



//long int C = 11;        // Jumbo glass      30