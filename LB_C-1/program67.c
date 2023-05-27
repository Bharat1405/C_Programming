// Accept number are reverse its digits.

#include<stdio.h>   

int MinimumDigit(int iNo)
{
  int iDigit = 0;
  int iMin = 9;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit < iMin)
    {
      iMin = iDigit;
    }
    iNo = iNo /10;
  }

  return iMin;
}



////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MinimumDigit(iValue);

    printf("Smallest = %d",iRet);
    
    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digit.
*/


