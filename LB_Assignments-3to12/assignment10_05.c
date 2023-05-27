// Write program which accepts number array and number No from user and return frequency of NO.

# include <stdio.h>
# include <stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
    
}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory: \n");
        return -1;
    }

    printf("\nEnter %d Elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("\nElements : ");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",p[iCnt]);
    }

    printf("\nEnter number NO to find in Array : \n");
    scanf("%d",&iNo);

    iRet = Frequency(p, iSize, iNo);
    
    printf("\nArray contains number NO with frequency : %d.\n",iRet);
    

    free(p);
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is number of Array elements.
*/
