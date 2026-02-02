// Check leap year

#include<stdio.h>

void CheckLeapYear(int year)
{
    if(year % 4 == 0 || year % 100 == 0 && year % 400 == 0)
    {
        printf("This is Leap year \n");
    }
    else
    {
        printf("This year is not leap year \n");
    }

}

int main()
{
    int yr;
    
    printf("Enter year : ");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0;
}