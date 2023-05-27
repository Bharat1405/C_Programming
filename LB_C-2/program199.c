// Write program to compare to strings with case insensitive.


#include <stdio.h>
// #include <stdlib.h>
#include <stdbool.h>

bool strcmpX(char *str1, char *str2)
{

	while ((*str1 != '\0') && (*str2 != '\0'))
	{
		if(*str1 != *str2)							//	letters are different
		{
			if((*str1 >= 'a') && (*str1 <= 'z'))	//	First letter is small
			{//		a(97)			A(65)+32 =  a(97)
				if(*str1 != (*str2 + 32))
				{
					break;
				}
			}
			else if((*str1 >= 'A') && (*str1 <= 'Z'))	//	First letter is capital
			{
				if(*str1 != (*str2 - 32))
				{
					break;
				}
			}
			else									//	for digits and special symbols
			{
				break;
			}
		}

		str1++;
		str2++;
	}
	
	if((*str1 == '\0') && (*str2 == '\0'))
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
	char Arr1[30];
	char Arr2[30];
	int iNo = 0;
	bool bRet = false;

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr1);

	// fflush(stdin);

	printf("Enter String : \n");
	scanf(" %[^'\n']s",Arr2);

	bRet = strcmpX(Arr1, Arr2);

	if(bRet == true)
	{
		printf("Both Strings are identical.\n");
	}
	else
	{
		printf("Both Strings are not identical.\n");
	}
  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

