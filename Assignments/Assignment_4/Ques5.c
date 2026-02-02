// Write a program which accept number from user and return difference between summation of all its factors and non factors.

//Input : 12
//Output : -34

//Input : 10
//Output : -29

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFrequency1 = 0;
    int iFrequency2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency1 = iFrequency1 + iCnt;
        }
        else
        {
            iFrequency2 = iFrequency2 + iCnt;
        }


    }
    return (iFrequency1-iFrequency2);

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}
