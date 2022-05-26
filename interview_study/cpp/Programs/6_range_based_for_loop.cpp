/*
    Requirement :- This example demonstrates various ways for using range based for loop
    Ref :- https://www.geeksforgeeks.org/range-based-loop-c/
*/
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() 
{
    vector<int> v = {0,1,2,3,4};
    for (auto i:v) {
        cout << i <<" ";
    }
    cout <<endl;
    
    // the initializer may be a braced-init-list
    for (auto i:{0,2,4,5,1})
    {
        cout << i <<" ";
    }
    cout <<endl;
    string str = "hello";
    for ( char c:str){
        cout << c;
    }
    cout <<endl;

    map<int, int> MAP({{1,1},{2,2},{3,3}});
    for (auto i:MAP)
        cout << i.first << " " << i.second <<endl;
    
}
