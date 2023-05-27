//  Chech whether Char is digit

/*
 Input  :  0

 Output :  0 is digit letter.


*/

#include <stdio.h>

bool CheckDigit(char ch)
{

  if((ch >= '0') && (ch <= '9'))
  {
    return true;
  }
  else
  {
    return false;
  }


  
  
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter charcher : \n");
    scanf("%c",&ch);

    bRet = CheckDigit(ch);

    if(bRet == true)
    {
      printf("%c is digit letter.\n",ch);
    }
    else
    {
      printf("%c is not digit letter.\n",ch);
    }
    


  return 0;
}
// ********************************************************




