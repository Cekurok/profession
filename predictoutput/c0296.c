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
int main()
{
    void demo();
    void (*fun)();
    fun = demo;
    (*fun)();
    fun();
    return 0;
}
 
void demo()
{
    printf("GeeksQuiz ");
}
