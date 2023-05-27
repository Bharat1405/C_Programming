// Replace evry capital letter with '*'

#include <stdio.h>
#include <stdlib.h>

void EditString(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = '*';
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

	EditString(Arr);

	printf("String after editing is : %s\n",Arr);

  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

