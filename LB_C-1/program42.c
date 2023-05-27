// Accept single number and Calculate factorial.

#include<stdio.h>               // For printf and scanf

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

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
    ULONG iRet = 0;

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


