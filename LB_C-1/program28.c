// Accept single number and check if it is perfect number.(n=s(n1,n2,n3))
//* with reduced time complexity, with updator.

#include<stdio.h>               // For printf and scanf
#include<stdbool.h>


bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect number.\n",iValue);
    }
    else
    {
        printf("%d is not perfect number.\n",iValue);
    }

    return 0;
}
// ********************************************************

/*
    Time complexity is O(N/2).
    where N is input.
*/



/*
    perfect number, a positive integer that is equal to the sum of its 
    proper divisors. The smallest perfect number is 6, which is the sum 
    of 1, 2, and 3. Other perfect numbers are 28, 496, and 8,128.

*/