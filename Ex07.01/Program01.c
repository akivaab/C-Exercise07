#include <stdio.h>
#include "Swap.h"

int main(void)
{
    int num1 = 1;
    int num2 = 2;
    SWAP(int, num1, num2);
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    char charA = 'A';
    char charB = 'B';
    SWAP(char, charA, charB);
    printf("charA: %c\n", charA);
    printf("charB: %c\n", charB);

    return 0;
}