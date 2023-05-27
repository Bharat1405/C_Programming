// return count of small letters from string.


#include <stdio.h>

int strlenSmallX(char *str)
{
	int iCount = 0;

	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
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

	iRet = strlenSmallX(Arr);

	printf("Count of Small letter : %d\n",iRet);
  
	return 0;
}
// ********************************************************




