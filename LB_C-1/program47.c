// Accept two numbers and display digits

#include<stdio.h>               // For printf and scanf


void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);
        iNo = iNo / 10;
    }
}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is power.
*/


