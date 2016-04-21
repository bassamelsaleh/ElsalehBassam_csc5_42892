/* 
 * File:   main.cpp
 * Author: Bassam
 * Going through the concept problems in chapter 6 
 * Pg. 304 Ch 6.2 program 6-2
 * Created on April 19, 2016, 11:55 AM
 */

#include <iostream>

using namespace std;

//Function 
void dispMes()
{
    cout<<"Hello from the function dispMes.\n";
}

//function main

int main(int argc, char** argv) {
    cout<<"Hello from main.\n";
    for (int count = 0; count < 5; count++)
        dispMes();//call dispMes
    cout<<"Back in function main again.\n";
    return 0;
}
