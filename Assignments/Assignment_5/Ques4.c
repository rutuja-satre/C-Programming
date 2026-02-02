// Check positive, Negative, or Zero

#include<stdio.h>

void CheckNumberType(int iNo)
{
    if(iNo > 0)
    {
        printf("Number is Positive\n");
    }
    else if(iNo < 0)
    {
        printf("Number is Negative\n");
    }
    else
    {
        printf("Number is zero\n");
    }

}

int main()
{
    int number;

    printf("Enter number:");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}