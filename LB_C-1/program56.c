// Accept numbers and check wheather 8 is present.

#include<stdio.h>              
#include<stdbool.h>

bool ChkDigits(int iNo)
{
   int iDigit = 0;
   bool bFlag = false;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            bFlag = true;
            break;
        }
        iNo = iNo / 10;
    }
    return bFlag;
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkDigits(iValue);

    if(bRet == true)
    {
        printf("Digit 8 present.\n");
    }
    else
    {
        printf("Digit 8 not present.\n");
    }

    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digit.
*/


