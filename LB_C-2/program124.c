//  Pattern printing

/*
 Input  :  Row: 5,  Col: 5

 Output :  

   1    &   1   &   
   2    &   2   &   
   3    &   3   &   
   4    &   4   &   
   5    &   5   &   
     

*/
#include <stdio.h>

void Display(int iRow, int iCol)
{
  int i =0, j = 0;
  char Arr[2] = {'*', '#'};

  for(i = 1; i <= iRow; i++)
  {
      for(j = 1; j <= iCol; j++)
      {
      
        if((j % 2) == 0)
        {
          printf("&\t");
        }
        else
        {
          printf("%d\t",i);
        }
        
      }
      printf("\n");
  }
  
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows : \n");
  scanf("%d",&iValue1);

  printf("Enter number of columns : \n");
  scanf("%d",&iValue2);
  
  Display(iValue1, iValue2);
 
  return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is input.
*/


