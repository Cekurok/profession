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
void swap(int *px, int *py) 
{ 
   *px = *px - *py; 
   *py = *px + *py; 
   *px = *py - *px; 
}
