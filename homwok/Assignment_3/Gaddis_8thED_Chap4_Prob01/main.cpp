/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 21, 2016, 9:24 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

//user libraries

//Global Constants
int main(int argc, char** argv) {
    //input values
    int a, b;
    cout<<"Input value A"<<endl;
    cin>>a;
    cout<<"Input value B"<<endl;
    cin>>b;
    //Establish values
    if (a > b)
    {
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if (b > a)
    {
        cout<<b<<" is greater than "<<a<<endl;
    }
    else if (b == a)
    {
        cout<<b<<" is equal to "<<a<<endl;
    }

    return 0;
}

