// Accept two numbers and diplay frequency of second in first.

#include<stdio.h>              
#include<stdbool.h>

int ChkDigits(int iNo, int iSearch)
{
   int iDigit = 0;
   int iCount = 0;

   if((iSearch > 9) || (iSearch < 0))
   {
        printf("Wrong input. give digit in range 0 to 9.\n");
        return 0;
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
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue1);

    printf("Enter digit to check : \n");
    scanf("%d",&iValue2);

    iRet = ChkDigits(iValue1, iValue2);

    printf("Frequency of %d in %d : %d.\n",iValue2,iValue1,iRet);
    
    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digit.
*/


