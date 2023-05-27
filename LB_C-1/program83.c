// Accept N no from user, find max value.

#include <stdio.h>
# include <stdlib.h>        // for malloc, free

int Maximum(int Arr[], int iLength)
{
  int iMax = 0;
  int iCnt = 0;

  iMax = Arr[0];

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(Arr[iCnt] > iMax)
    {
      iMax = Arr[iCnt];
    }
  }

  return iMax;
}



////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
  int iSize = 0;
  int *ptr = NULL;
  int iCnt = 0;
  int iRet = 0;

  printf("Enter number of elements : \n");
  scanf("%d",&iSize);

  ptr = (int *)malloc(iSize * sizeof(int));

  printf("Enter the elements : \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }

  printf("Elemets odf Array are : \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("%d\t",ptr[iCnt]);
  }

  iRet = Maximum(ptr, iSize);

  printf("\n\nLargest elements : %d",iRet);

  free(ptr);
    
  return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is number of element.
*/


