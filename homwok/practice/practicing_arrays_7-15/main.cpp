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
    int hours[SIZE];
    float payRate[SIZE];
    for (int index = 0; index<SIZE;index++){
        cout<<"Hours worked by employee #"<<(index+1)<<": ";
        cin>>hours[index];
        cout<<"Hours Pay rate for employee #"<<(index+1)<<": ";
        cin>>payRate[index];
    }
    
    //Display each employee
    for(int index=0; index<SIZE; index++){
        float grossPay=hours[index]*payRate[index];
        cout<<"Employee #"<<(index+1);
        cout<<": $"<< grossPay<<endl;
    }
    return 0;
}

