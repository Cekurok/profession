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
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    ++*p;
    p += 2;
    printf("%d", *p);
    return 0;
}
