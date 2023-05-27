// Operation on array.

#include <stdio.h>
# include <stdlib.h>        // for malloc, free

void Fun(int Arr[], int iLength)
{
  // Logic
}



////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
  int iSize = 0;
  int *ptr = NULL;
  int iCnt = 0;

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

  Fun(ptr, iSize);

  free(ptr);
    
  return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is number of element.
*/


