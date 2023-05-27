// Write program which accepts number from user and count frequency of 2.


# include <stdio.h>

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 2)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    return iCount;
}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter numbers: \n");
    scanf("%d",&iValue);
    
    iRet = CountDigit(iValue);

   
    printf("Frequency of 2 is : %d\n",iRet);
   
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digits.
*/
