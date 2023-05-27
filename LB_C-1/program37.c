// Accept single number and display upto input.

#include<stdio.h>               // For printf and scanf

void DisplayF(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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

    DisplayF(iValue);

    
    return 0;
}
// ********************************************************

/*
    Time complexity is O(N).
    where N is power.
*/


