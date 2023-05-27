// Accept single number and to get factors of it without number itself.
//* with reduced time complexity.
#include<stdio.h>               // For printf and scanf

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)       //O(N/2)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
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

    DisplayFactors(iValue);
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(N/2).
    where N is input.
*/