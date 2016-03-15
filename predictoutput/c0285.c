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
int main()
{
    char p[] = "geeksquiz";
    char t;
    int i, j;
    for(i=0,j=strlen(p); i<j; i++)
    {
        t = p[i];
        p[i] = p[j-i];
        p[j-i] = t;
    }
    printf("%s", p);
    return 0;
}
