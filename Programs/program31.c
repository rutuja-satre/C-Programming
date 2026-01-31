//*  *   *   *   *
#include<stdio.h>

void Display()
{
    int icnt = 0;

    for(icnt = 1; icnt<= 5; icnt++)                 
    {                                       // static loop because it contain *
        printf("*\t");
    }
   

    printf("\n");
    
}

int main()
{
    Display();

    return 0;
}