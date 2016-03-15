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
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
void fun(char** str_ref)
{
    str_ref++;
}
 
int main()
{
    char *str = (void *)malloc(100*sizeof(char));
    strcpy(str, "GeeksQuiz");
    fun(&str);
    puts(str);
    free(str);
    return 0;
}
