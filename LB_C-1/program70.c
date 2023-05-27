// Accept number are reverse its digits.

#include<stdio.h>   

int MaxDigit(int iNo)
{
  int iDigit = 0;
  int iMax = 0;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit > iMax)
    {
      iMax = iDigit;
    }
    if(iMax == 9)
    {
      break;
    }
    iNo = iNo /10;
  }

  return iMax;
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

    iRet = MaxDigit(iValue);

    printf("Largest = %d",iRet);
    
    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digit.
*/


