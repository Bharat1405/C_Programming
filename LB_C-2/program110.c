//  Pattern printing

// Input  :  3
// Output :  -3   -2   -1

# include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;

  for(iCnt = -iNo; iCnt < 0; iCnt++)
  {
    printf("%d\t",iCnt);      
  }
  
	printf("\n");
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
  int iFrequency = 0;

  printf("Enter the frequency of symbol : \n");
  scanf("%d",&iFrequency);
 
  Display(iFrequency);
 
  return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is input.
*/


