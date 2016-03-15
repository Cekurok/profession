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
#include<stdio.h>
void mystery(int *ptra, int *ptrb) 
{
   int *temp;
   temp = ptrb;
   ptrb = ptra;
   ptra = temp;
}
int main() 
{
    int a=2016, b=0, c=4, d=42;
    mystery(&a, &b);
    if (a < c)
       mystery(&c, &a);
    mystery(&a, &d);
    printf("%d\n", a);
}
