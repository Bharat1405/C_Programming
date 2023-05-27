// Write program to Copy n letters only.


#include <stdio.h>
#include <stdlib.h>

void strcpyX(char *src, char *dest, int iLength)
{

	while ((*src != '\0') && (iLength != 0))
	{
		*dest = *src;

		src++;
		dest++;

		iLength--;
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
	int iNo = 0;

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);

	printf("Enter the number of letters that you want to concat : \n");
	scanf("%d",&iNo);


	strcpyX(Arr, Brr, iNo);

	printf("String after copy is : %s\n",Brr);

  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

