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
void foo (char *a)
{
  if (*a && *a != ` `)
  { 
     foo(a+1);
     putchar(*a);
  }
}
