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
// Assume that integers take 4 bytes.
#include<iostream>

using namespace std;   

class Test
{
  public :
  static int i;
  int j;
};

int Test::i;

int main()
{
  Test::i = 5;
  cout << "sizeof Test = " << sizeof(Test) << endl;
  cout << "Test::i     = " << Test::i << endl;
  return 0;
}
