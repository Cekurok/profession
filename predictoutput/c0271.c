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
i = 0;
j = 1;
while (j < n )
{
    if (E) j++;
    else if (a[j] - a[i] == S) break;
    else i++;
}
if (j < n)
    printf("yes")
else
   printf ("no");
