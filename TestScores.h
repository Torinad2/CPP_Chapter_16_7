/********************************************************
 * TestScores.h                                         *
 * Specification file for the TestScores class          *
 ********************************************************/

#ifndef TESTSCORES_H
#define TESTSCORES_H

#include <iostream>

using namespace std;

class TestScores {

private:
   /*****************************************************
    * Array of 5 scores                                 *
    *****************************************************/
    int scores[5];    

public:
   /*****************************************************
    * Constructor                                       *
    * Accepts an array of test scores                   *
    * Throws an exception if a score is out of range    *
    *****************************************************/
    TestScores(int arr[]);

   /*****************************************************
    * getAverage                                        *
    * Calculates the average of the test scores         *
    *****************************************************/
    double getAverage() const;
};

#endif
