/**
 * \file   file.cpp
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
#include <iostream>
using namespace std;
 
int main()
{
    try
    {
       throw 10;
    }
    catch (...)
    {
        cout << "default exception\n";
    }
    catch (int param)
    {
        cout << "int exception\n";
    }
 
    return 0;
}
