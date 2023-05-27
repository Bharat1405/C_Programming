// Accept single number and check if it is prime number.
// without flag

#include<stdio.h>               // For printf and scanf
#include<stdbool.h>


bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {   break;  }
    }
    if(iCnt == (iNo/2)+1)
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

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number.\n",iValue);
    }
    else
    {
        printf("%d is not prime number.\n",iValue);
    }

    return 0;
}
// ********************************************************

/*
    Time complexity is O(N/2).
    where N is input.
*/


