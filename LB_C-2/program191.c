// Write program to contact 2 strings for only n letters.


#include <stdio.h>
#include <stdlib.h>

// 1 : travel till end of dest
// 2 : copy data from src to dest
// 3 : write '\0' at the end of dest.

void strncatX(char *src, char *dest, int iLength)
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

		iLength--;
		if(iLength == 0)
		{
			break;
		}
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
	int iNo = 0;

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);

	printf("Enter the number of letters that you want to concat : \n");
	scanf("%d",&iNo);

	strncatX(Arr, Brr, iNo);

	printf("String after concat is : %s\n",Brr);

  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

