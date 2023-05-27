/* Programming_paradigms (Iteration) with Updator */
// Display 'Jay Ganesh' for user-dependend frequency times on screen.

#include<stdio.h>               // For printf and scanf

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)            //   Updator
    {
        iNo = -iNo;
    }

//          1          2        3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");      //  4
    }

}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;

    printf("Enter the frequency for Jay Ganesh statement :\n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}

// ********************************************************

//  1 - Declaration
//  2 - Condition
//  3 - Displacement
//  4 - Loop Body


/*       Dry Run     */
//------------------------------------
//  1

//  2   4   3

//  2   4   3

//  2   4   3

//  2   4   3

//  2   4   3

//  2


// ********************************************************