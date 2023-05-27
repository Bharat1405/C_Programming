// Accept single number and Calculate factorial.

#include<stdio.h>               // For printf and scanf

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}



////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Result is : %d",iRet);
    
    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is power.
*/


