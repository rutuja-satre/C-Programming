#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt = 2; icnt <= iNo; icnt = icnt+2)
    {
        printf("%d\t",icnt);
    }
 
    printf("\n");
    
}

int main()
{
    int iValue = 0;
    printf("Please enter frequency \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}