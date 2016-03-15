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
int main()
{
    char str[] = "GeeksQuiz";
    printf("%s %s %s\n", &str[5], &5[str], str+5);
    printf("%c %c %c\n", *(str+6), str[6], 6[str]);
    return 0;
}
