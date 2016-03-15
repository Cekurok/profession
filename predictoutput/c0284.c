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
int fun(char *p)
{
    if (p == NULL || *p == '\0') return 0;
    int current = 1, i = 1;
    while (*(p+current))
    {
        if (p[current] != p[current-1])
        {
            p[i] = p[current];
            i++;
        }
        current++;
    }
    *(p+i)='\0';
    return i;
}
 
int main()
{
    char str[] = "geeksskeeg";
    fun(str);
    puts(str);
    return 0;
}
