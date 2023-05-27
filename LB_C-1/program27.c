// Accept single number and check if it is perfect number.(n=s(n1,n2,n3))
//* with reduced time complexity, with updator.

#include<stdio.h>               // For printf and scanf
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)         // Filter
    {
        printf("Error : Invalid input.");
        return -1;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)       // O(N/2)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;

}

bool CheakPerfect (int iNumber)
{
    int iResult = 0;

    iResult = SumFactors(iNumber);
    if(iResult == iNumber)
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


    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheakPerfect(iValue);

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