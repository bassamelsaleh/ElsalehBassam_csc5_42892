/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Gaddis ch.6 prob. 05
 * Created on April 21, 2016, 10:53 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global variables

//User variables

//Functions
int drop();

int main(int argc, char** argv) {
    int d;
    
    for(int count=0;count<10;++count){
    d=drop();
    cout<<"The ball is now at a distance of "<<d<<" after "<<count<<" sec."<<endl;
    }

    return 0;
}

int drop(){
    int in=1;
    float g=9.8;
    float d=0;
    
    d=0.5f*g*in*in;
    
    return d;
}
