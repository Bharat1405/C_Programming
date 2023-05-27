// Count of Small letters and Capital letters.

#include <stdio.h>
#include <stdlib.h>

void Frequency(char *str)
{
	int iCntSmall = 0;
	int iCntCap = 0;

	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCntSmall++;
		}
		else if((*str >= 'A') && (*str <= 'Z'))
		{
			iCntCap++;
		}
		str++;
	}
	
	printf("Count of Capital letters : %d\n", iCntCap);
	printf("Count of Small letters : %d\n", iCntSmall);
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
	char Arr[30];

	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);

	Frequency(Arr);

  
	return 0;
}
// ********************************************************


/*
	Time complexity : O(N)
	where N is length of string
*/

