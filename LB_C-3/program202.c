// Write program to check if string is palindrom,

#include <stdbool.h>
#include <stdio.h>

bool checkPalindrom(char *str)
{
	char *start = NULL;
	char *end = NULL;

	start = str;
	end = str;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		if(*start != *end)
		{
			break;
		}
		start++;
		end--;
	}
	
	if(start <end)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
	char Arr[30];
	bool bRet = false;

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);

	bRet = checkPalindrom(Arr);

	if(bRet == true)
	{
		printf("Palindrom");
	}
	else
	{
		printf("Not Palindrom");
	}
  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	
*/

