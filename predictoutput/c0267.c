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
 
int * arrPtr[5];
 
int main()
{
 if(*(arrPtr+2) == *(arrPtr+4))
 {
   printf("Equal!");
 }
 else
 {
  printf("Not Equal");
 }
 return 0;
}
