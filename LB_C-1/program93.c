//  Accept N no from user, accept one more number, return its last occurance index.
//  Linear serarch (without flag)

# include <stdio.h>
# include <stdlib.h>        // for malloc, free

#define ERR_NOTFOUND -1

int SearchLastOccurance(int Arr[], int iLength, int iNo)
{
  int iCnt = 0;

  for(iCnt = iLength-1; iCnt >= 0; iCnt--)
  {
    if(Arr[iCnt] == iNo)
    {
      break;
    }
  }

  return iCnt;
  
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
  int iValue = 0;

  printf("Enter number of elements : \n");
  scanf("%d",&iSize);

  ptr = (int *)malloc(iSize * sizeof(int));


  printf("Enter the elements : \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }


  printf("Enter the element that you want to search : \n");
  scanf("%d",&iValue);



  printf("Elemets odf Array are : \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("%d\n",ptr[iCnt]);
  }



  iRet = SearchLastOccurance(ptr, iSize, iValue);

  if(iRet == ERR_NOTFOUND)
  {
    printf("\nThere is no such element.\n");
  }
  else
  {
    printf("\n%d occured at index %d\n",iValue,iRet);
  }
  free(ptr);
    
  return 0;
}
// ********************************************************

/*
    Time complexity is O(1) to O(N).
    where N is number of element.
*/


