// Write program which accepts single number from user 
// and display its all non-factors


#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo); iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }
    }

}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is input.
*/
