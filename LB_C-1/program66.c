// Accept number are reverse its digits.

#include<stdio.h>              

float DigitsAverage(int iNo)
{
  int iDigit = 0;
  int iSum = 0;
  int iCount = 0;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  while(iNo != 0)
  {
    iDigit = iNo % 10;

    iSum = iSum + iDigit;
    iCount++;

    iNo = iNo /10;
  }

  return ((float)iSum / (float)iCount);
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = DigitsAverage(iValue);

    printf("Average  = %f.",fRet);
    
    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digit.
*/


