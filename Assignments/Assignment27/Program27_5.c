#include<stdio.h>
#include<stdlib.h>

void Revers(char *str)
{
    int i = 0;
    int j = 0;
    char temp = '\0';

    while(str[i] != 0)
    {
        i++;
    }

    i--;
    while(i >= 0)
    {
        printf("%c",str[i]);
        i--;
    }
}

int main()
{
    char arr[20];

    printf("Enter an String : \n");
    scanf("%[^'\n']s",arr);

    Revers(arr);
    
    return EXIT_SUCCESS;
}
