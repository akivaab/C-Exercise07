#pragma warning (disable : 5045) /* Beyond scope of course */
#include <stdlib.h>
#include "VarTracing.h"

#define ARRAY_SIZE 4

int main(void)
{
    int sum = 0;
    double average = 0.0;
    int grades[ARRAY_SIZE] = { 90, 100, 90, 86 };

    for (size_t index = 0; index < ARRAY_SIZE; ++index)
    {
        sum += grades[index];
        average = sum / ((double)index + 1);
        TRACE_VAR(IntToString, index);
        TRACE_VAR(IntToString, grades[index]);
        TRACE_VAR(IntToString, sum);
        TRACE_VAR(DoubleToString, average);
    }

    return 0;
}