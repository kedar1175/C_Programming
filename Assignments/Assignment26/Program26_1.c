
#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\t\tDecimal\t\tHexadecimal\t\tOctal\n");
    printf("-------------------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if(i == 27)
        {
            printf("ESC\t\t%d\t\t%x\t\t\t%o\n",i,i,i);
        }
        else if(i == 9)
        {
            printf("HT\t\t%d\t\t%x\t\t\t%o\n",i,i,i);
        }
        else
        {
            printf("%c\t\t%d\t\t%x\t\t\t%o\n",i,i,i,i);
        }
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
