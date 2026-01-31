#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

// < o(N)
bool LinearSearch(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
            
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    return (iCnt != iSize);
    
    
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    bool bRet = false;
    IPTR iPtr = NULL;

    printf("Enter the number of the Elements : \n");
    scanf("%d",&iLength);                                                             // number of a elements
    
    //Step 1: Allocate the memmory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the values : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the number to search  : \n");
    scanf("%d",&iValue);

    // Step 2: Use the memory
    bRet = LinearSearch(iPtr,iLength,iValue);

    if(bRet == true)
    {
        printf("%d is present in the data\n ",iValue);
    }
    else
    {
        printf("%d is  not present in the data\n ",iValue);

    }

    //Step 3: Free the memory
    free(iPtr);

    return 0;
}