// Write program to Copy string in toggle case


#include <stdio.h>
#include <stdlib.h>

void strcpytoggleX(char *src, char *dest)
{

	while (*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src + 32;
		}
		else if((*src >= 'a') && (*src <= 'z'))
		{
			*dest = *src - 32;
		}
		else
		{
			*dest = *src;
		}
		
		dest++;
		src++;
	}
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

	strcpytoggleX(Arr, Brr);

	printf("String after copy is : %s\n",Brr);

  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

