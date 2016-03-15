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
#include "stdio.h"
 
typedef int (*funPtr)(int);
 
int inc(int a)
{
 printf("Inside inc() %d\n",a);
 return (a+1);
}
 
int main()
{
 
 funPtr incPtr1 = NULL, incPtr2 = NULL;
 
 incPtr1 = &inc; /* (1) */
 incPtr2 = inc; /* (2) */
 
 (*incPtr1)(5); /* (3) */
 incPtr2(5); /* (4)*/
 
 return 0;
}
