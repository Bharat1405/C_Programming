// Accept two numbers and diplay frequency of even digits.

#include<stdio.h>              
#include<stdbool.h>

int CountEvenDigit(int iNo)
{
   int iDigit = 0;
   int iCount = 0;

   if(iNo < 0)
   {
        iNo = -iNo;
   }

   while(iNo != 0)
    {
        iDigit = iNo % 10;

//      if((iDigit % 2) == 1)
        if((iDigit % 2) != 0)
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
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigit(iValue);

    printf("Frequency of Odd digit in %d : %d.\n",iValue,iRet);
    
    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digit.
*/


