// Write a program which accept number from user and display its factors in decreasing order.
 
//Input: 12
//Output : 6  4   3   2   1

#include <stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo/2); iCnt > 0; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf(" %d",iCnt);
        }
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}