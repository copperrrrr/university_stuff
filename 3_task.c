#include <stdio.h>

int main()
{
    
    int c; //ввод символов
    int f = 0; //флаг
    int d = 0; //счётчик

    while ((c = getchar()) != EOF) // цикл
    {
        if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        {
            f = 1;
        }

        if (c == ' ' && f != 1)
        {
            d++;
        }

        else if(c == ' ' && f == 1)
        {
            f = 0;
        }
        
        if (c == 10 && f != 1)
        {
            d++;
        }
        
    }

    printf("\n%d", d);
    printf("\n");

}