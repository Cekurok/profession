/**
 * \file   main.c
 * \author Rangarajan R 
 * \date   May, 2016
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
 *   No part of this should be published in any form without the author 
 *   permission
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * \fn    fun
 * \brief   implemention of logic.
 * \details 
 *   Detailed description of func provides certain actions as an example.
 *
 * \param [in] repeat  Number of times to do nothing.
 *
 * \retval TRUE   Successfully did nothing.
 * \retval FALSE  Oops, did something.
 *
 */
int fun()
{

}

 /**
 * \fn    main
 * \brief   main driver funcation.
 * \details 
 *   Detailed description of func provides certain actions as an example.
 *
 * \param [in] repeat  Number of times to do nothing.
 *
 * \retval TRUE   Successfully did nothing.
 * \retval FALSE  Oops, did something.
 *
 */
int main(int argc,char* argv[]) {

        // Calculate the time taken by fun()
	clock_t t;
	t = clock();
	fun();
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

	printf("fun() took %f seconds to execute \n", time_taken);
	return 0;
}
