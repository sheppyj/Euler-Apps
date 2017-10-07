//
//  Problem1.cpp
//  Problem1
//
//  Created by Jack Sheppard on 07/10/2017.
//  Copyright © 2017 Jack Sheppard. All rights reserved.
//

/*
 If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

using namespace std;

int main()
{
    //Save upper boundry found in question to variable
    int UpperBoundary = 1000;
    //initialise result
    int result = 0;
    
    //increment from 0 to upper boundry
    for ( int increment = 0; increment < UpperBoundary; increment++)
    {
        //if modulus increment has no remainder for either 3 or 5 add to result
        if ( ( increment % 3 == 0 ) or ( increment % 5 == 0 ) )
        {
            result += increment;
        }
    }
    
    //print output and exit
    cout << result << endl;
    return 0;
}
