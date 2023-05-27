// Accept single number and display upto input in reverse.

#include<stdio.h>               // For printf and scanf

void DisplayB(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
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

    DisplayB(iValue);

    
    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is power.
*/


