/**
 * \file   singleton.cpp
 * \author Rangarajan R 
 * \date   December, 2015
 * \brief  
 *   Brief description of file.
 *
 * \details 
 *   Detailed description of file.
 *
 * \note
 *   The notes for this file.
 *
 * \copyright
 *   No part of this should be published in any form without the author permission
 */
 
#include <iostream>
#include "../inc/singleton.h"

using namespace std;

Singleton * Singleton::instance = NULL;
Singleton::Singleton(){

}

Singleton::~Singleton(){
	delete instance;
}

Singleton* Singleton::getInstance(){
	if (instance == NULL)
	{
		instance = new Singleton();
	}
	
	return  instance;
}


void Singleton::singletonOperation(){
	cout << "singletonOperation" << endl;
}



int main(int argc, char *argv[])
{
	Singleton * sg = Singleton::getInstance();
	sg->singletonOperation();
	
	return 0;
}
