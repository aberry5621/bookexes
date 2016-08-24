//
//  Book exercise 1.11
//  skratch
//
//  Created by ax on 8/24/16.
//
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Population Growth Projection" << endl;
    cout << "1 birth per 7 seconds" << endl;
    cout << "1 death per 13 seconds" << endl;
    cout << "1 immigration per 45 seconds" << endl;
    cout << "-----------------------------" << endl;
    cout << "Current population: 312,032,486" << endl;
    // seconds per year is 60 seconds x 60 minutes x 24 hours x 365 days
    cout << "Year 1 population: " << 312032486 + ((60 * 60 * 24 * 365) / 7.0) - ((60 * 60 * 24 * 365) / 13.0) + ((60 * 60 * 24 * 365) / 45.0) << endl;
    cout << "Year 2 population: " << 312032486 + 2 * ((60 * 60 * 24 * 365) / 7.0) - ((60 * 60 * 24 * 365) / 13.0) + ((60 * 60 * 24 * 365) / 45.0) << endl;
    cout << "Year 3 population: " << 312032486 + 3 * ((60 * 60 * 24 * 365) / 7.0) - ((60 * 60 * 24 * 365) / 13.0) + ((60 * 60 * 24 * 365) / 45.0) << endl;
    cout << "Year 4 population: " << 312032486 + 4 * ((60 * 60 * 24 * 365) / 7.0) - ((60 * 60 * 24 * 365) / 13.0) + ((60 * 60 * 24 * 365) / 45.0) << endl;
    cout << "Year 5 population: " << 312032486 + 5 * ((60 * 60 * 24 * 365) / 7.0) - ((60 * 60 * 24 * 365) / 13.0) + ((60 * 60 * 24 * 365) / 45.0) << endl;
    
    return 0;

}
