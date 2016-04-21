/* 
 * File:   main.cpp
 * Author: Bassam
 * Going through the concept problems in chapter 6 
 * Pg. 310 Ch 6.3 program 6-5
 * Created on April 19, 2016, 11:55 AM
 */

#include <iostream>

using namespace std;

//Function 
void first();
void second();

int main(int argc, char** argv) {
    cout<<"I am starting in function main.\n";
    first();    //call function first
    second();   //call function second
    cout<<"Back in function main again.\n";
    return 0;
}

void first()
{
    cout<<"I am now inside the function first.\n";
}

void second()
{
    cout<<"I am now inside the function second.\n";
}
