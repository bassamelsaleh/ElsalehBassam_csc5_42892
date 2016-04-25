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
    int k;
    
    k=drop();
    cout<<"The Kinetic energy of the object is "<<k<<endl;


    return 0;
}

int drop(){
    int v=0;
    float m=0;
    float k=0;
    cout<<"What is the velocity in meters per second?"<<endl;
    cin>>v;
    
    cout<<"What is the mass in kilograms?"<<endl;
    cin>>m;
    
    k=0.5f*m*v*v;
    
    return k;
}
