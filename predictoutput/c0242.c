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
#include <stdio.h>
#define PRINT(i, limit) do \
                        { \
                            if (i++ < limit) \
                            { \
                                printf("GeeksQuiz\n"); \
                                continue; \
                            } \
                        }while(1)
 
int main()
{
    PRINT(0, 3);
    return 0;
}
