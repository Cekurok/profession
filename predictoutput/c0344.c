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
#include <string.h>
int main()
{
    char a[] = {'G','E','E','K','S','Q','U','I','Z'};
    char b[] = "QUIZ";
    char c[] = "GEEKS";
    char d[] = "1234";
    int l = strlen(a);
    int o = printf("%d", sizeof((sizeof(l)+(c[5]+d[0]+a[1]+b[2]))) );
    printf("%c", a[o]);
    return 0;
}
