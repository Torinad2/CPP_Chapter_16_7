/****************************************************
 *TestScores.cpp                                    *
 *Implementation file for the TestScores class      *
 ****************************************************/

#include "TestScores.h"
#include <iostream>
#include <string>

using namespace std;

/****************************************************
 * Constructor: Initializes the test scores         *
 * Throws an exception if a score is invalid        *
 ****************************************************/
TestScores::TestScores(int arr[]) {
    
   /*************************************************
	* Define the exception string               *
    *************************************************/
    string exceptionString = "Error: Test score out of valid range (0 - 100)\n";
    
   /*************************************************
    * Check each score for validity                 *
    *************************************************/
    for (int i = 0; i < 5; i++) {

        /********************************************
	 * Throw an exception                       *
	 ********************************************/
        if (arr[i] < 0 || arr[i] > 100) {
            throw exceptionString;
        }

       /*********************************************
	* Proper assignment of the score            *
        *********************************************/
        scores[i] = arr[i];  
    }
}

/****************************************************
 * getAverage: Calculates the average score         *
 ****************************************************/
double TestScores::getAverage() const {
    double total = 0.0;
    for (int i = 0; i < 5; i++) {
        total += scores[i];
    }	

    /************************************************
     * Return the average of the scores             *
     ************************************************/
    return total / 5;
}
