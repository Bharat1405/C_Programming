//  Accept N no from user, accept one more number, check wheather number presen in array.
//  Linear serarch (without flag)

# include <stdio.h>
# include <stdlib.h>        // for malloc, free
# include <stdbool.h>


bool Search(int Arr[], int iLength, int iNo)
{
  int iCnt = 0;
  

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] == iNo)
    {
      break;
    }
  }

  if(iCnt == iLength)
  {
    return false;
  }
  else
  {
    return true;
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
  bool bRet = 0;
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



  bRet = Search(ptr, iSize, iValue);

  if(bRet == true)
  {
    printf("%d present in array.\n",iValue);
  }
  else
  {
    printf("%d not present in array.\n",iValue);
  }
  
  
  free(ptr);
    
  return 0;
}
// ********************************************************

/*
    Time complexity is O(1) to O(N).
    where N is number of element.
*/


