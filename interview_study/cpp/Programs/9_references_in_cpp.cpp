/*
    Requirement :- This example is for understanding references in cpp
    Ref :- https://www.geeksforgeeks.org/references-in-c/
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5};
    for(int& x:v)
        x+=5;

    for(int i:v)
        cout << i <<" ";
}