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
#include<stdio.h>
int x = 5;
int main()
{
    int arr[x];
    static int x = 0;
    x = sizeof(arr);
    printf("%d", x<<2);
    return 0;
}
