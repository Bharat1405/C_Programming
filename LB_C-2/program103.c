//  Pattern printing

// Input  : 3
// Output :  A	 B	 C

// Input   : 7
// Output  : A	B	C	D	E	F	G 

# include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  char ch = 'A';

//        1         2         3
  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%c\t",ch);      //  4
	ch++;
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


