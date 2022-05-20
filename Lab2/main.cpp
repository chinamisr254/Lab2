//
//  main.cpp
//  Lab2
//
//  Created by Joseph Hawkins on 5/19/22.
//

#include <iostream>
using namespace std;
int main()
{
    // insert code here...
    unsigned short int sum = 2 + 3;
    cout << "1. The sum of 2 + 3\t\t\t\t\t"<< " = ";
    cout << sum;
    int amount_mult = 5 * 6;
    cout << "\n2. The multiplication of 5*6\t\t"<< " = ";
    cout << amount_mult;
    int amount_divide = 15 / 7;
    cout << "\n3. When I divide 15/7, the quotient\t"<< " = ";
    cout << amount_divide<<endl;
    int remainder = 15 % 4;
    cout << "4. The remainder of 15 % 4\t\t\t"<< " = "<<remainder;
    cout << "\n\n\n\tThis is end of my first Program";
    cout << "\n\t\t\tThank you!"<<endl;
    return 0;
}
