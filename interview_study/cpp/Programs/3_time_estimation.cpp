/*
    Requirement :- Write a program that calculates time taken by a function
    Ref :- https://www.geeksforgeeks.org/using-namespace-std-considered-bad-practice/
            https://en.cppreference.com/w/cpp/chrono/duration/duration_cast

*/
#include <chrono>
#include <iostream>
#include <ratio>
#include <thread>
using namespace std;
int main () 
{
    auto start = chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(chrono::seconds(1));
    std::this_thread::sleep_for(1000ms); // refer this https://en.cppreference.com/w/cpp/chrono/operator%22%22h, https://en.cppreference.com/w/cpp/chrono/duration to know more about how "ms" is parsed 
    auto stop = chrono::high_resolution_clock::now();
    chrono::duration<double,std::milli> fp_ms = stop-start;
    //auto fp_ms_2 = stop-start;
    cout << fp_ms.count() << endl;
    //cout << fp_ms_2.count() << endl;
}

