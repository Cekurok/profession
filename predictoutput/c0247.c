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
#define square(x) x*x
int main()
{
  int x;
  x = 36/square(6);
  printf("%d", x);
  return 0;
}
