// Replace every small letter with corresponding capital letter.

// 'A' = 65,	'a' = 97 		(97 - 65 = 32)

#include <stdio.h>
#include <stdlib.h>

void struprX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
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

	struprX(Arr);

	printf("String after editing is : %s\n",Arr);

  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

