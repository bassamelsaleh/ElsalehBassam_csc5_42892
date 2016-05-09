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
    const int NUM=10;
    char let[NUM]={'A','B','C','D','E',
                        'F','G','H','I','J'};
    cout <<"Character"<<"\t"<<"Ascii code\n";
    cout<<"----------"<<"\t"<<"----------\n";
    for (int count =0; count<NUM;count++){
        cout<<let[count]<<"\t\t";
        cout<<static_cast<int>(let[count])<<endl;
    }
    

    return 0;
}

