// return last Ocurance of character 

#include <stdio.h>
#include <stdlib.h>

#define ERR_NOTFOUND -1

int LastOcurance(char *str, char cValue)
{
	int iCnt = 1;
	int iPos = ERR_NOTFOUND;

	while(*str != '\0')
	{
		if(*str == cValue)
		{
			iPos = iCnt;
			
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

	iRet = LastOcurance(Arr, ch);

	if(iRet == ERR_NOTFOUND)
	{
		printf("ERROR : There is no such character.\n");
	}
	else
	{
		printf("Last Ocurance of character is at : %d\n",iRet);
	}
  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

