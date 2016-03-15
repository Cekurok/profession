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
  static int a[] = {10, 20, 30, 40, 50};
  static int *p[] = {a, a+3, a+4, a+1, a+2};
  int **ptr = p;
  ptr++;
  printf("%d%d", prt-p, **ptr};
}
