//
//  Book excercise 1.8
//  skratch
//
//  Created by ax on 8/24/16.
//
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Area and Perimeter of a Circle with Radius 5.5" << endl;

    cout << "P = 2rPI: " << (2 * 5.5) * (4 * (1.0 - (1.0/3) + (1.0/5) - (1.0/7) + (1.0/9) - (1.0/11) + (1.0/13)))<< endl;
    
    cout << "A = PIr^2: " << (4 * (1.0 - (1.0/3) + (1.0/5) - (1.0/7) + (1.0/9) - (1.0/11) + (1.0/13))) * (5.5 * 5.5) << endl;
    
    return 0;

}
