//


#include <stdio.h>

int strlenX(char str[])
{


}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
	char Arr[10];
	int iRet = 0;

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);

	iRet = strlenX(Arr);

	printf("Length of string : %d\n",iRet);
  
	return 0;
}
// ********************************************************




