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
void f(int* p, int m)
{
    m = m + 5;
    *p = *p + m;
    return;
}
void main()
{
    int i=5, j=10;
    f(&i, j);
    printf("%d", i+j);
}
