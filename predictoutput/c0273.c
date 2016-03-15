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
 
void myStrcat(char *a, char *b)
{
    int m = strlen(a);
    int n = strlen(b);
    int i;
    for (i = 0; i <= n; i++)
       a[m+i]  = b[i];
}
 
int main()
{
    char *str1 = "Geeks ";
    char *str2 = "Quiz";
    myStrcat(str1, str2);
    printf("%s ", str1);
    return 0;
}
