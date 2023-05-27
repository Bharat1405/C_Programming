/* Programming_paradigms (Iteration) */
// Display 'Jay Ganesh' 5 times on screen.

#include<stdio.h>               // For printf and scanf

void Display()
{
    int iCnt = 0;

//          1          2        3
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Jay Ganesh...\n");      //  4
    }

}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    Display();
    
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