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
    char p;
    char buf[10] = {1, 2, 3, 4, 5, 6, 9, 8};
    p = (buf + 1)[5];
    printf("%d\n", p);
    return 0;
}
