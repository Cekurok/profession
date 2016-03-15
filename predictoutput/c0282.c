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
  
void my_toUpper(char* str, int index)
{
    *(str + index) &= ~32;
}
  
int main()
{
    char* arr = "geeksquiz";
    my_toUpper(arr, 0);
    my_toUpper(arr, 5);
    printf("%s", arr);
    return 0;
}
