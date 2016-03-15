/**
 * \file   file.c
 * \author Rangarajan R 
 * \date   March, 2016
 * \brief  
 *   Predict the output.
 *
 * \details 
 *   Detailed description of file.
 *
 * \note
 *   The notes for this file.
 *
 * \copyright
 *   
 */
#include <stdio.h>
 
int main()
{
    int *ptr;
    int x;
 
    ptr = &x;
    *ptr = 0;
 
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
 
    *ptr += 5;
    printf(" x  = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
 
    (*ptr)++;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
 
    return 0;
}
