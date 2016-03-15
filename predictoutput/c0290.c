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
# include <stdio.h>
int main( )
{
    char s1[7] = "1234", *p;
    p = s1 + 2;
    *p = '0' ;
    printf ("%s", s1);
}
