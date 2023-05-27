// write program which accept marks and display class accordingly
// 0 to 34          Fail
// 35 to 49         Pass class
// 50 to 59         First class
// 60 to 74         Second class
// 75 to 100        Distinction

#include<stdio.h>               // For printf and scanf
#include<stdbool.h>             // For bool datatype

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDivisible
//  Input :         Integer
//  Output :        boolean
//  Description :   Checks whether input is divisible by 3 and 5
//  Author :        Vishal Gopal Bhoi
//  Date :          25/04/2023
//  Update Date :
//
//////////////////////////////////////////////////////////////////////

void DisplayClass(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.00f))
    {
        printf("Invalid Input \n");
        printf("Please enter the marks in between 0 to 100\n");
    }

    if((fMarks >= 0.0f) && (fMarks< 35.00f))
    {
        printf("You are Fail.\n");
    }
    else if ((fMarks >= 35.00f) && (fMarks < 50.00f))
    {
        printf("You got pass class.\n");
    }
    else if ((fMarks >= 50.00f) && (fMarks < 60.00f))
    {
        printf("You got second class.\n");
    }
    else if ((fMarks >= 60.00f) && (fMarks < 75.00f))
    {
        printf("You got first class.\n");
    }
    else if ((fMarks >= 75.00f) && (fMarks < 100.00f))
    {
        printf("You got first class with distinction.\n");
    }
}

////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    float fValue = 0.0f;             // Variable to accept input

    printf("Please enter your percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);
    
    return 0;                           // return success status
}