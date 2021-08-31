#ifndef _VAR_TRACING_H_
#define _VAR_TRACING_H_
#include <stdio.h>

/**
 * @file Variable Tracing
*/

/**
 * @brief Macro that prints a variable name and its value, but only when in debug mode.
 * 
 * @note the first parameter ot the macro must be a ToString() function
*/
#ifdef _DEBUG
# define TRACE_VAR(func, x) printf("%s = %s\n", #x, func(x))
#else
# define TRACE_VAR(x) do {} while(0)
#endif //  _DEBUG

/**
 * @brief Convert an integer to a string.
 * 
 * @param num the number being converted
 * 
 * @return the string representation of the number
*/
char *IntToString(int num);

/**
 * @brief Convert a float to a string.
 *
 * @param num the number being converted
 *
 * @return the string representation of the number
*/
char *FloatToString(float num);

/**
 * @brief Convert a double to a string.
 *
 * @param num the number being converted
 *
 * @return the string representation of the number
*/
char *DoubleToString(double num);

/**
 * @brief Convert a character to a string.
 * 
 * @param ch the character being converted
 * 
 * @return the string representation of the character
*/
char *CharToString(char ch);

#endif
