#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt = 2; icnt <= iNo; icnt += 2)
    {
        printf("%d\t",icnt);
    }
 
    printf("\n");
    
}

// Time complexity : o(N/2)

int main()
{
    int iValue = 0;
    printf("Please enter frequency \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}