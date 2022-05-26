/*
    Requirement : Demonstrate various for_each loops
    ref :https://www.geeksforgeeks.org/for_each-loop-c/
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printint(int a) {
    cout << a <<" ";
}
struct Class2 {
    void operator() (int a) {
        cout << a*3 <<" ";
    }
} ob1;

int main() {
    int a[5] = {1,4,2,3,6};
    for_each(a,a+5,printint);
    cout <<endl;
    for_each(a,a+5,ob1);
    cout <<endl;
    vector<int> v = {4,2,5,3,1};
    for_each(v.begin(),v.end(),printint);
    cout <<endl;
    for_each(v.begin(),v.end(),ob1);
    cout <<endl;
}