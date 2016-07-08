/**
 * \file   list-test.h
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

class base {
    public :
    int a;
    virtual void publicfunc(void){}
    private :
    int b;
    virtual void privatefunc(void){}
    protected :
    int c;
    virtual void protectedfunc(void){}
    
};

class A
{

};
class B
{
int i; 
}; 

class C
{
void foo();
};
class D
{
virtual void foo();
};

class E
{
int i ; 
    virtual void foo();
};
class F
{
int i; 
    void foo();
};
class G
{
    void foo();
    int i;
    void foo1();
};

class H
{
    int i ;
    virtual void foo();
    virtual void foo1();
};
