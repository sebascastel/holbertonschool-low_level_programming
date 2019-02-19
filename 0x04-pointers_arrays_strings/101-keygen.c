#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - password
 * Return: 0
 */
int main(void)
{
        int a = 0;
        int b = 0;

        srand(time(NULL));
        a = rand() % 128;
        while (b <= 2772 - 128)
        {
                putchar(a);
                b = a + b;
        }
        a = 2772 - b;
        putchar(a);
        return (0);
}

