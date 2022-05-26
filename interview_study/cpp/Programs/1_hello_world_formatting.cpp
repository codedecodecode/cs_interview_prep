/*
    Requirement :- Modify the 0_compiler_test.cpp program to print 
                "Hello World!" 4 times on a line for 6 lines, 
                where each is printed in a field of 17 spaces. 
                Use for-loops to do this. 
    ref :- https://developers.google.com/edu/c++/getting-started
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i , j;
    cout.flags(ios::left);
    for (i = 0; i < 6; i++) {
        for ( j = 0; j < 4; j++) {
            
            cout.width(17);
            cout << "Hello world";
        }
        cout << endl;
    }
}