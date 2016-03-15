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
#define macro(n, a, i, m) m##a##i##n
#define MAIN macro(n, a, i, m)
 
int MAIN()
{
    printf(" GeeksQuiz ");
    return 0;
}
