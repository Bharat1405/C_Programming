//  Pattern printing

/*
 Input  :  Row: 5,  Col: 5

 Output : 

A
A B 
A B C 
A B C D 
A B C D E

*/

#include <stdio.h>

void Display(int iRow, int iCol)
{
  int i =0, j = 0;
  char ch = '\0';
  
  if(iRow != iCol)
  {
    printf("Invalid Input\n");
    return;
  }

  for(i = 1; i <= iRow; i++)
  {
      for(j = 1, ch = 'A'; j <= i; j++, ch++)
      {
       printf("%c\t",ch);
       
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




