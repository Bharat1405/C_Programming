// Accept numbers and count Digits

#include<stdio.h>               // For printf and scanf


int DisplayDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
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


