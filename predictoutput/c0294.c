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
    int (*ptr)(int ) = fun;
    (*ptr)(3);
    return 0;
}
 
int fun(int n)
{
  for(;n > 0; n--)
    printf("GeeksQuiz ");
  return 0;
}
