//  Pattern printing

// Input  : 3
// Output : #  #  #

// Input   : 7
// Output  : #  #  #  #  #  #  #

# include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("#\t");
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


