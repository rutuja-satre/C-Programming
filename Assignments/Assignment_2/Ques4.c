// Accept two numbers from user and display first number in second number of times.


#include<stdio.h>

void Display(int iNo1, int iFrequency)
{
    int iNo = 0 ;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iNo = 1 ; iNo <= iFrequency ; iNo++)
    {
        printf("%d",iNo1);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0 ;
}