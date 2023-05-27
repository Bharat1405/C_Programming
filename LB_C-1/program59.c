// Accept two numbers and diplay frequency of  second in first.

#include<stdio.h>              
#include<stdbool.h>

bool ChkDigits(int iNo, int iSearch)
{
   int iDigit = 0;
   bool bFlag = false;

   if((iSearch > 9) || (iSearch < 0))
   {
        printf("Wrong input. give digit in range 0 to 9.\n");
        return false;
   }

   if(iNo < 0)
   {
        iNo = -iNo;
   }

   while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue1);

    printf("Enter digit to check : \n");
    scanf("%d",&iValue2);

    bRet = ChkDigits(iValue1, iValue2);

    if(bRet == true)
    {
        printf("%d is present in %d",iValue2,iValue1);
    }
    else
    {
        printf("%d is not present in %d",iValue2,iValue1);

    }
    return 0;
}
// ********************************************************

/*
    Time complexity is in between O(1) to O(N).
    where N is number of digit.
*/


