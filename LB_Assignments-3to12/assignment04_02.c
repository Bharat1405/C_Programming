// Write program which accepts name from user and print that name. 


#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }    
    else
    {
        return FALSE;
    }

}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    

    return 0;
}

// ********************************************************

/*
    Time complexity is O(1).
    where N is input.
*/
