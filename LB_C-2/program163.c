// return count of capital letters from string.


#include <stdio.h>

int strlenCapX(char *str)
{
	int iCount = 0;

	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
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
	char Arr[10];
	int iRet = 0;

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);

	iRet = strlenCapX(Arr);

	printf("Count of Capital letter : %d\n",iRet);
  
	return 0;
}
// ********************************************************




