//
//  Problem2.cpp
//  Problem2
//
//  Created by Jack Sheppard on 08/10/2017.
//  Copyright © 2017 Jack Sheppard. All rights reserved.
//

/*
 Each new term in the Fibonacci sequence is generated by adding the previous two terms.
 By starting with 1 and 2, the first 10 terms will be:
 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 By considering the terms in the Fibonacci sequence whose values do not exceed four million,
 find the sum of the even-valued terms.
*/

#include <iostream>

using namespace std;

int main ()
{
    //Save Upper Boundary from question
    int UpperBoundary = 4000000;
    //Working out first term in sequence
    int Start1 = 1;
    int Start2 = 1;
    //Declaring before use
    int Result = 0;
    int SumOfEven = 0;
    
    //While results of two numbers is less than 4 million
    while ( Result < UpperBoundary )
    {
        
        //if modulus number leaves no remainders (ie equal) then..
        if ( Result % 2 == 0 )
        {
            //Add result
            SumOfEven += Result;
            
        }
        
        //Result is previous two terms added
        Result = Start1 + Start2;
        //Make second in previous sequence first
        Start1 = Start2;
        //Make second in previoius sequence second
        Start2 = Result;
    
    }

    //Print result
    cout << SumOfEven << endl;
    return 0;
}