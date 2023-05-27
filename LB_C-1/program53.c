// Accept numbers and Display digits in reverse order.

#include<stdio.h>               // For printf and scanf

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    for( ;iNo != 0; iNo= iNo / 10)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);
    }
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digit.
*/


