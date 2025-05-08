//********************************************************************************************
//* Assignment: TestScores Class                                                             *
//*                                                                                          *
//* Write a class named TestScores. The class constructor should accept an array of test     *
//* scores as its argument. The class should have a member function that returns the average *
//* of the test scores. If any test score in the array is negative or greater than 100, the  *
//* class should throw an exception. Demonstrate the class in a program.                     *
//*                                                                                          *
//* TestScores needs to throw an exception for the situation described.                      *
//* Your "demo" program that uses TestScores needs to handle the exception and display a     *
//* message that an error has occurred.                                                      *
//* Make sure you follow the conventions listed in section 13.5 to separate the class        *
//* specification from the implementation.                                                   *
//********************************************************************************************

/********************************************************
 * TestScores Program                                   *
 * This program demonstrates the TestScores class       *
 * functionality. It asks the user to enter scores      *
 * and calculates the average. It handles               *
 * exceptions gracefully when input is out of range     *
 ********************************************************/

#include "TestScores.h"
#include <iostream>
#include <string>

using namespace std;

/********************************************************
 * Main Function                                        *
 * Demonstrates the TestScores class functionality      *
 * Asks the user to enter scores and calculates avg     *
 ********************************************************/
int main() {

    /****************************************************
     * Array to hold user-entered test scores           *
     ****************************************************/
    int userScores[5];  

    /****************************************************
     * Prompt user for input                            *
     ****************************************************/
    cout << "Enter 5 test scores (0 - 100):" << endl;

    /****************************************************
     * Loop to read scores from the user                *
     ****************************************************/
    for (int i = 0; i < 5; i++) {
        cout << "Score " << (i + 1) << ": ";
        cin >> userScores[i];
    }

    /****************************************************
     * Attempt to create a TestScores object            *
     * If scores are out of range, an exception is      *
     * thrown and caught gracefully                     *
     ****************************************************/
    try {

        /************************************************
         * Create object                                *
         ************************************************/
        TestScores testScores(userScores);  
        
        /************************************************
         * Display the average score                    *
         ************************************************/
        cout << "Average score : " << testScores.getAverage() << endl;
    }

    /****************************************************
     * Catch the exception and display error message    *
     ****************************************************/
    catch (string exceptionString) {
        cerr << exceptionString << endl;
    }

    /****************************************************
     * Indicate end of program                          *
     ****************************************************/
    cout << "End of the program.\n" << endl;

    /****************************************************
     * Developer credit                                 *
     ****************************************************/
    cout << endl;
    cout << "********************************************" << endl;
    cout << "* Developed by: Nikita Baiborodov          *" << endl;
    cout << "********************************************" << endl;

    return 0;
}
