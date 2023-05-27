// Accept two numbers and Calculate Power.

#include<stdio.h>               // For printf and scanf
#include<stdbool.h>             // For Boolean datatype


long CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    long iResult = 1;

    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }

    return iResult;
}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    long iRet = 0;

    printf("Enter base: \n");
    scanf("%d",&iValue1);

    printf("Enter power: \n");
    scanf("%d",&iValue2);

    iRet = CalculatePower(iValue1, iValue2);

    printf("Result is : %d\n",iRet);
    
    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is power.
*/


