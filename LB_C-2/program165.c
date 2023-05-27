// return count of vowels letters from string.
// (a,e,i,o,u,A,E,I,O,U)

#include <stdio.h>

int strlenVowelsX(char *str)
{
	int iCount = 0;

	while(*str != '\0')
	{
		if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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

	iRet = strlenVowelsX(Arr);

	printf("Count of vowels : %d\n",iRet);
  
	return 0;
}
// ********************************************************




