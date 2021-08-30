#include <stdio.h>
#include "Swap.h"

int main(void)
{
    int num1 = 1;
    int num2 = 2;
    SWAP(int, num1, num2);
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
}