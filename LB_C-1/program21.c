// Accept single number and to get factors of it.

#include<stdio.h>               // For printf and scanf

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
    

}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    
    return 0;
}

// ********************************************************