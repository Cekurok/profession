/**
 * \file   vector-test.cpp
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

/*

************************************************************
                    Member functions
************************************************************
(constructor)
	constructs the vector
 
(destructor)
	destructs the vector
 
operator=
	assigns values to the container
 
assign
	assigns values to the container
 
get_allocator
	returns the associated allocator
 
************************************************************
                    Element access
************************************************************
at
	access specified element with bounds checking
 
operator[]
	access specified element
 
front
	access the first element
 
back
	access the last element
 
data
(C++11)
	direct access to the underlying array
 

************************************************************
                       Iterators
************************************************************
begin cbegin
	returns an iterator to the beginning
 
end cend
	returns an iterator to the end
 
rbegin crbegin
	returns a reverse iterator to the beginning
 
rend crend
	returns a reverse iterator to the end
 
************************************************************
                      Capacity
************************************************************
empty
	checks whether the container is empty
 
size
	returns the number of elements
 
max_size
	returns the maximum possible number of elements
 
reserve
	reserves storage
 
capacity
	returns the number of elements that can be held in currently allocated storage
 
shrink_to_fit
(C++11)
	reduces memory usage by freeing unused memory
 
************************************************************
                      Modifiers
************************************************************
clear
	clears the contents
 
insert
	inserts elements
 
emplace
(C++11)
	constructs element in-place
 
erase
	erases elements
 
push_back
	adds an element to the end
 
emplace_back
(C++11)
	constructs an element in-place at the end
 
pop_back
	removes the last element
 
resize
	changes the number of elements stored
 
swap
	swaps the contents
 
************************************************************
               Non-member functions
************************************************************
operator==
operator!=
operator<
operator<=
operator>
operator>=
	lexicographically compares the values in the vector
(function template)
std::swap(std::vector)
	specializes the std::swap algorithm
(function template)

************************************************************

*/
#include <iostream>
#include "../inc/vector-test.h"

using namespace std;

/**
 * \fn    printVector
 * \brief   print the content of the vector
 * \details 
 *   to print the elements in the vector separated by space between each element
 *
 * \param [in] vec The vector to printed.
 *
 * \retval TRUE   Successfully did nothing.
 * \retval FALSE  Oops, did something.
 *
 **/
bool printVector(vector<int> vec) {
    for(int i = 0;i < vec.size(); i++)
        cout << vec[i] << " ";
        cout << endl;

}

int main (void) {
    /* constructor */
    int choice = 1, subChoice = 1;
    int temp = 0;

    while(choice != 0){
        cout <<" 1. Create a vector" << endl;
        cout <<" 2. print the vector" << endl;
        cout <<" 3. delete the vector" << endl;
        cout <<" 4. exit" << endl;

        cin >> subChoice;

        vector <int> vec;

        switch(subChoice){

            case 1:
            cout << "Enter the element of vector : " << endl;
            while(!cin.eof()) {
                cin >> temp;
                vec.push_back(temp);
            }
            break;
            
            case 2:
            cout << "The vector elements are : " << endl;
            for(vector<int>::const_iterator it = vec.begin(); it != vec.end();
            it++)
            {
                cout << *it << " ";
            }

            cout << endl;
            break;

            case 3:
            break;

            default :
            cout <<" Enter only choice provide " << endl;
        }
    }

    cout << "inside vector program" << endl;

    return 0;

}
