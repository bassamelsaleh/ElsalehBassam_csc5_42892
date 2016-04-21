/* 
 * File:   main.cpp
 * Author: Bassam
 * Going through the concept problems in chapter 6 
 * Pg. 313 Ch 6.4 program 6-7
 * Created on April 19, 2016, 11:55 AM
 */

#include <iostream>

using namespace std;

//Function 
void dispV(int);

//function main

int main(int argc, char** argv) {
    cout<<"I am passing several values to dispV.\n";
    dispV(5);   //call dispV with argument 5
    dispV(10);  //call dispV with argument 5
    dispV(2);   //call dispV with argument 5
    dispV(16);  //call dispV with argument 5
    cout<<"I am back in main.\n";
    return 0;
}

void dispV(int num)
{
    cout<<"The value is "<<num<<endl;
}