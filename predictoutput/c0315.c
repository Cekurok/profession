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
void fun(int *ptr)
{
    *ptr = 30;
}
 
int main()
{
  int y = 20;
  fun(&y);
  printf("%d", y);
 
  return 0;
}
