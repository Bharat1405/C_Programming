//  Chech whether Char is capital

/*
 Input  :  

 Output : 


*/

#include <stdio.h>
#include <stdbool.h>

bool CheckCapital(char ch)
{

  if((ch >= 65) && (ch <= 90))
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

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
      printf("%c is capital letter.\n",ch);
    }
    else
    {
      printf("%c is not capital letter.\n",ch);
    }
    


  return 0;
}
// ********************************************************




