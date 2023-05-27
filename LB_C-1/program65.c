// Accept number are reverse its digits.

#include<stdio.h>              
#include<stdbool.h>

bool CheckPallindrom(int iNo)
{
  int iDigit = 0;
  int iReverse = 0;
  int iTemp = iNo;

  while(iNo != 0)
  {
    iDigit = iNo % 10;

    iReverse = (iReverse * 10) + iDigit ;

    iNo = iNo/10;
  }

  if (iReverse == iTemp)
  {
    return true;
  }
  else
  {
    return false;
  }
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

    bRet = CheckPallindrom(iValue);

    if(bRet == true)
    {
      printf("Pallindrom.");
    }
    else
    {
      printf("Not Pallindrom.");
    }

    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digit.
*/


