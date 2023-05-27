#include<stdio.h>

#define PI 3.14

int main()
{
  float Ans = 0.0F;
  float Rad = 9.0F;

  Ans = PI * Rad * Rad;

    printf("%f\n",Ans);

    return 0;
}


// gcc Preprocessor.c -o Myexe -save-temp
