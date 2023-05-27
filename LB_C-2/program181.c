// Replace every letter to toggle case.

/* 
'A' = 65,	'a' = 97 		(97 - 65 = 32)

For Cap to small : *str + 32
For Small to cap : *str - 32

 */

#include <stdio.h>
#include <stdlib.h>

void strtoggleX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		else if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		
		str++;
	}
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
	char Arr[30];

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);

	strtoggleX(Arr);

	printf("String after editing is : %s\n",Arr);

  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

