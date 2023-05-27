// Replace every capital letter with corresponding small letter.
// 'A' = 65,	'a' = 97 (97 - 65 = 32)

#include <stdio.h>
#include <stdlib.h>

void strlwrX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
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

	strlwrX(Arr);

	printf("String after editing is : %s\n",Arr);

  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

