/*
    Requirement : Demonstrate various function string class
    ref :https://www.geeksforgeeks.org/c-string-class-and-its-applications/
*/

#include <string>
#include <iostream>
using namespace std;
int main()
{
    string str1("first string");
    string str2(str1);
    string str3(5,'#');
    string str4(str1,6,6);
    string str5(str2.begin(), str2.begin()+5);

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5 << endl;

    // go through some member functions of string class to understand better
    
}
