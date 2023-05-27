// Write program to Copy string in reverse order


#include <stdio.h>
#include <stdlib.h>

void strcpyrevX(char *src, char *dest)
{
	int iLength = 0;

	while(*src != '\0')
	{
		src++;
		iLength++;
	}

	src--;

	for(; iLength != 0; iLength--, src--, dest++)
	{
		*dest = *src;
	}

	// while (iLength != 0)
	// {
	// 	*dest = *src;

	// 	src--;
	// 	dest++;

	// 	iLength--;
	// }

	*dest = '\0';
	
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
	char Arr[30];
	char Brr[30];

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);

	strcpyrevX(Arr, Brr);

	printf("String after copy is : %s\n",Brr);

  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

