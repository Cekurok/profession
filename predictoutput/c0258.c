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
 
void print(int arr[])
{
   int n = sizeof(arr)/sizeof(arr[0]);
   int i;
   for (i = 0; i < n; i++)
      printf("%d ", arr[i]);
}
 
int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   print(arr);
   return 0;
}
