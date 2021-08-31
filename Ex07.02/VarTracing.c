#include <stdlib.h>
#include <string.h>
#include "VarTracing.h"

char *IntToString(int num)
{
    char str[20];
    char str2[20];
    sprintf_s(str, 20, "%d", num);
    strncpy_s(str2, 20, str, 20);
    return str2;
}

char *FloatToString(float num)
{
    char str[20];
    char str2[20];
    sprintf_s(str, 20, "%f", num);
    strncpy_s(str2, 20, str, 20);
    return str2;
}

char *DoubleToString(double num)
{
    char str[20];
    char str2[20];
    sprintf_s(str, 20, "%lf", num);
    strncpy_s(str2, 20, str, 20);
    return str2;
}

char *CharToString(char ch)
{
    char str[20];
    char str2[20];
    sprintf_s(str, 20, "%c", ch);
    strncpy_s(str2, 20, str, 20);
    return str2;
}