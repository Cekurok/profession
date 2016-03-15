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
#define ISEQUAL(X, Y) X == Y
int main()
{
    #if ISEQUAL(X, 0)
        printf("Geeks");
    #else
        printf("Quiz");
    #endif
    return 0;
}
