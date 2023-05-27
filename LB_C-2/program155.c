//  Chech whether Char is small

/*
 Input  :  

 Output : 


*/

#include <stdio.h>
#include <stdbool.h>

bool CheckSmall(char ch)
{

  if((ch >= 'a') && (ch <= 'z'))
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

    bRet = CheckSmall(ch);

    if(bRet == true)
    {
      printf("%c is small letter.\n",ch);
    }
    else
    {
      printf("%c is not small letter.\n",ch);
    }
    


  return 0;
}
// ********************************************************




