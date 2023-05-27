// Accept numbers and diplay frequency of 8 .

#include<stdio.h>              
#include<stdbool.h>

int ChkDigits(int iNo)
{
   int iDigit = 0;
   int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = ChkDigits(iValue);

    printf("Frequency of 8 : %d\n",iRet);

    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digit.
*/


