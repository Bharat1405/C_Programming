// Accept single number and display upto input.
// using while

#include<stdio.h>               // For printf and scanf

void DisplayF(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while(iCnt <= iNo)
    {
       printf("%d\t",iCnt);
       iCnt++;
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


