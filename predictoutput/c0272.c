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
int max(int *p, int n)
{
    int a=0, b=n-1;
    while (__________)
    {
        if (p[a] <= p[b])
        {
            a = a+1;
        }
        else
        {
            b = b-1;
        }
    }
    return p[a];
}
