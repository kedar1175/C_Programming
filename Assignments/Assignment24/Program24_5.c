#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    int i = 0;
    int j = 0;
    char temp = '\0';

    while(str[i] != '\0')
    {
        i++;
    }

    i--;

    while(i > j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i--;
        j++;
    }
}

int main()
{
    char arr[20];

    printf("Enter an String : \n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);
    
    printf("Modified string is %s",arr);
    
    return EXIT_SUCCESS;
}
