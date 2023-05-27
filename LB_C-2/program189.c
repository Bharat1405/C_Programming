// Write program to contact 2 strings.


#include <stdio.h>
#include <stdlib.h>

// 1 : travel till end of dest
// 2 : copy data from src to dest
// 3 : write '\0' at the end of dest.

void strcatX(char *src, char *dest)
{
	// 1 : travel till end of dest
	while (*dest != '\0')
	{
		dest++;
	}

	// 2 : copy data from src to dest
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	// 3 : write '\0' at the end of dest.
	*dest = '\0';
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
	char Arr[30];
	char Brr[30] = "Demo";

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);

	strcatX(Arr, Brr);

	printf("String after copy is : %s\n",Brr);

  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

