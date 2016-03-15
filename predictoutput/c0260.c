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
void xyz(int a[], int b [], int c[])
{
  int i, j, k;
  i = j = k = O;
  while ((i<n) && (j<m))
     if (a[i] < b[j]) c[k++] = a[i++];
     else c[k++] = b[j++];
}
