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
int fun(char *str1)
{
  char *str2 = str1;
  while(*++str1);
  return (str1-str2);
}
 
int main()
{
  char *str = "GeeksQuiz";
  printf("%d", fun(str));
  return 0;
}
