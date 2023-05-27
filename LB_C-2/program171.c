// return First Ocurance of character 

#include <stdio.h>
#include <stdlib.h>

int FirstOcurance(char *str, char cValue)
{
	int iCnt = 1;
	int iPos = 0;

	while(*str != '\0')
	{
		if(*str == cValue)
		{
			iPos = iCnt;
			break;
		}
		str++;
		iCnt++;
	}

	return iPos;
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

	fflush(stdin);

	printf("Enter character : \n");
	scanf("%c",&ch);

	iRet = FirstOcurance(Arr, ch);

	printf("First Ocurance of character is at : %d\n",iRet);
  
	return 0;
}
// ********************************************************




