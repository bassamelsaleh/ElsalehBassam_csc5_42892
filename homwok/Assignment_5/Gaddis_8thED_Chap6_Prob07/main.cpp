/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Gaddis ch.6 prob. 07
 * Created on April 21, 2016, 10:53 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global variables

//User variables

//Functions
float drop(int);

int main(int argc, char** argv) {
    float c;
    int a=0;
    for (int count=0;count<=20;++count){
        drop(a);
    c=drop(a);
    
    cout<<"The temperature in Fahrenheit of "<<count<<" is approximately  to "
            ""<<c<<" In Celsius."<<endl;

a++;
}
    return 0;
}

float drop(int a){
    float d;
    
    d=0.55555f*(a-32);
    
        
    
    return d;
}
