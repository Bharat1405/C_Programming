// Accept single number and addition of  get summation of factors of it without number itself.
//* with reduced time complexity, with filter.
#include<stdio.h>               // For printf and scanf

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)             // Filter
    {
        printf("Error : Invalid input.");
        return -1;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)      //  O(N/2)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;

}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Summation of factors is : %d\n",iRet);

    return 0;
}
// ********************************************************

/*
    Time complexity is O(N/2).
    where N is input.
*/