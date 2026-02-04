#include<stdio.h>

int CountSmall(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <=122))                // 97 & 122 are ascii values
        {
            iCount++;
        }
        str++;
    }

    return iCount;

}

int main()
{
    char Arr[50] = {'\0'};
    int iRet= 0 ;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);                    //[^'\n']  for skip the space

    iRet = CountSmall(Arr);

    printf("Number of small characters are :%d\n", iRet);

  
    return 0;
}