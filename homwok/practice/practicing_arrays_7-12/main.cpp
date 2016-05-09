/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 9, 2016, 9:24 AM
 */

#include <iostream>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int SIZE=5;
    int number[5];
    
    //get values for array/
    for(int &val : number){
        cout<<"Enter an integer value: ";
        cin>>val;
    }
    
    //display the values in the array.
    cout<<"here are the values you entered:\n";
    for (int val: numbers)
        cout<<val<<endl;

    return 0;
}

