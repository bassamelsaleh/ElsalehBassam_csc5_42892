/* 
 * File:   main.cpp
 * Author: Bassam
 * Going through the concept problems in chapter 6 
 * Pg. 314 Ch 6.4 program 6-8
 * Created on April 19, 2016, 11:55 AM
 */

#include <iostream>

using namespace std;

//Function 
void showSum(int, int, int);

//function main

int main(int argc, char** argv) {
    int value1, value2, value3;
    
    //get three integers.
    cout << "Enter three integers and I will display ";
    cout << "their sum: ";
    cin >> value1>>value2>>value3;
    
    //Call showSum
    showSum(value1, value2, value3);
    return 0;
}

void showSum(int num1, int num2, int num3)
{
    cout<<(num1+num2+num3)<<endl;
}