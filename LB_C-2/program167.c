// return count of 'z' letter from string.


#include <stdio.h>

int CountChar(char *str)
{
	int iCount = 0;

	while(*str != '\0')
	{
		if(*str == 'z')
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

	iRet = CountChar(Arr);

	printf("Count of z : %d\n",iRet);
  
	return 0;
}
// ********************************************************




