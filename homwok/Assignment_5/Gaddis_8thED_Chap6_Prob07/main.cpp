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
int drop(int);

int main(int argc, char** argv) {
    int c;
    int f=0;
    for (int count=0;count<=20;++count){
        drop(f)
    c=drop();
    cout<<"The temperature in Fahrenheit of "<<count<<" is equal to "
            ""<<c<<" In Celsius."<<endl;


}
    return 0;
}

int drop(int f){
    int d;
    
    
        d=5/9f*(f-32);
        f++;
    
    return d;
}
