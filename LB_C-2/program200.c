// Write program reverse string in place.


#include <stdio.h>

void strrevX(char *str)
{
	char *start = NULL;
	char *end = NULL;
	char temp = '\0';

	start = str;
	end = str;

	while(*end != '\0')
	{
		end++;
	}
	end--;

	while(start < end)
	{
		temp   = *start;
		*start = *end;
		*end   = temp;

		start++;
		end--;
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

	strrevX(Arr);

	printf("Reverse string :%s",Arr);
  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N + (N/2))
	
*/

