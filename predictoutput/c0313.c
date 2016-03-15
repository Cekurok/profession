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
int f(int *p, int n)
{
    if (n <= 1) return 0;
    else return max(f(p+1,n-1),p[0]-p[1]);
}
int main()
{
    int a[] = {3,5,2,6,4};
    printf("%d", f(a,5));
}
