
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
 *   here are some standard macros which can be used to print program file 
 *   (__FILE__), Date of compilation (__DATE__), Time of compilation (__TIME__) 
 *   and Line Number in C code (__LINE__)
 *
 * \copyright
 *   
 */

#include <stdio.h>
 
int main()
{
   printf("Current File :%s\n", __FILE__ );
   printf("Current Date :%s\n", __DATE__ );
   printf("Current Time :%s\n", __TIME__ );
   printf("Line Number :%d\n", __LINE__ );
   return 0;
}
