////////////////////////////////////////////////////////////////////////
//
//              Required Output
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   // for input output
#include<stdbool.h>                                 // for bool datatype

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :  CheckEvenOdd
//  Description     :   It is used to check even or odd
//  Input           :   Integer
//  Output          :   Boolean
//  Author          :   Rutuja Dilip Satre
//  Date            :   10/10/2025
//
////////////////////////////////////////////////////////////////////////

bool CkeckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////
//
//      Entry point function of the application
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false ;                     // default value of boolean

    printf("Enter the number ");
    scanf("%d",&iValue);

    bRet = CkeckEvenOdd(iValue);

    if( bRet == true)
    {
        printf("%d is Even number\n",iValue);   
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }
    return 0 ;
}