/*
    START
        Accept number and store as no
        Divide no by 2
        if the remainder is 0
            then display as Even
        Otherwise
            display as odd

    STOP
*/
#include<stdio.h>

void CkeckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2 ;
    if(iRem == 0)
    {
        printf("It is even Number\n");
    }
    else
    {
        printf("It is Odd Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number ");
    scanf("%d",&iValue);

    CkeckEvenOdd(iValue);

    return 0 ;
}