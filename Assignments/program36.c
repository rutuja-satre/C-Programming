#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt<= iNo; icnt++)
    {
        printf("%d\t",icnt);
    }
   

    printf("\n");
    
}

int main()
{
    Display(7);

    return 0;
}