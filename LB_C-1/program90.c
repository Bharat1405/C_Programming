//  Accept N no from user, accept one more number, return its first occurance index.
//  Linear serarch (without flag)

# include <stdio.h>
# include <stdlib.h>        // for malloc, free


int SearchIndex(int Arr[], int iLength, int iNo)
{
  int iCnt = 0;

  for(iCnt= 0; iCnt < iLength; iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
      break;
    }
  }

  if(Arr[iCnt] == iNo)      //  Wrong logic Dont use
  {
    return -1;
  }
  else
  {
    return iCnt;
  }
  
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



  iRet = SearchIndex(ptr, iSize, iValue);

  if(iRet == -1)
  {
    printf("There is no such element.\n");
  }
  else
  {
    printf("%d occured at index %d\n",iValue,iRet);
  }
  free(ptr);
    
  return 0;
}
// ********************************************************

/*
    Time complexity is O(1) to O(N).
    where N is number of element.
*/


