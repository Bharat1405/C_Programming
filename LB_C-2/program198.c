// Write program to compare to strings


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool strcmpX(char *str1, char *str2)
{

	for( ;((*str1 != '\0') && (*str2 != '\0') && (*str1 == *str2)); str1++,str2++);
	
	return((*str1 == '\0') && (*str2 == '\0'));

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

	fflush(stdin);

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr2);

	bRet = strcmpX(Arr1, Arr2);

	if(bRet == true)
	{
		printf("Both Strings are same.\n");
	}
	else
	{
		printf("Both Strings are not same.\n");
	}
  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

