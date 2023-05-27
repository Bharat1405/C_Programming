// Accept numbers and Calculate Summation of digits.

#include<stdio.h>               // For printf and scanf


int DisplayDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = DisplayDigits(iValue);

    printf("%d",iRet);

    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is power.
*/


