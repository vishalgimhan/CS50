#include "cs50.h"
#include <stdio.h>

int get_positive_int(void);
void meow(int n);

int main(void)
{
    int n;
    int times = get_positive_int();
    meow(times);
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Positive integer: ");
    }
    while (n <= 0);
    return n;
} 

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

// int main(void)
// {
//     int i = 0;
//     while (i < 3)
//     {
//         printf("Hello, World!\n");
//         i++;
//     }
// }

// for (int i = 0; i < 3; i++)
// {
//     printf("Hello, World!\n");
// }