// return count of digit letters from string.


#include <stdio.h>

int strlenDigitX(char *str)
{
	int iCount = 0;

	while(*str != '\0')
	{
		if((*str >= '0') && (*str <= '9'))
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

	iRet = strlenDigitX(Arr);

	printf("Count of digit : %d\n",iRet);
  
	return 0;
}
// ********************************************************




