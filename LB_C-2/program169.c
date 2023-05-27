// return count of char letter from string.


#include <stdio.h>

int CountChar(char *str, char ch)
{
	int iCount = 0;

	while(*str != '\0')
	{
		if(*str == ch)
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
	char ch = '\0';

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);

	printf("Enter character : \n");
	scanf(" %c",&ch);

	iRet = CountChar(Arr, ch);

	printf("Count of char : %d\n",iRet);
  
	return 0;
}
// ********************************************************




