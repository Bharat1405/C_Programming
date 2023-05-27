// return count of white spaces from string.


#include <stdio.h>

int strlenSpacesX(char *str)
{
	int iCount = 0;

	while(*str != '\0')
	{
		if(*str == ' ')
		{
			iCount++;
		}
		str++;	
	}

	return iCount;
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
	char Arr[30];
	int iRet = 0;

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);

	iRet = strlenSpacesX(Arr);

	printf("Count of white spaces : %d\n",iRet);
  
	return 0;
}
// ********************************************************




