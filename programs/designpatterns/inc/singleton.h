/**
 * \file   singleton.h
 * \author 
 *   Rangarajan R 
 *
 * \date   
 *   December, 2015
 *
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

#ifndef __SINGLETON_H__

#define __SINGLETON_H__

class Singleton
{

public:
	virtual ~Singleton();
	Singleton *m_Singleton;

	static Singleton* getInstance();
	void singletonOperation();

private:
	static Singleton * instance;

	Singleton();

};

#endif /*__SINGLETON_H__*/
