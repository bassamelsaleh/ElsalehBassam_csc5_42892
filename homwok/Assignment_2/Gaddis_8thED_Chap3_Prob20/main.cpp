/* 
 * Author: Bassam Elsaleh
 * 3/7/2016
 * Purpose: slice of pizza
 */

#include <iostream>
#include <cmath>

using namespace std;

//user libraries

//Global Constants
const float PI = atan(1.0)*4;

int main(int argc, char** argv) {
    //declare variables
    float sarea, area ;
    int slice, diam;
    
    //set variables
    sarea = 14.125;
    diam = 12;
    
    //calculate
    area = (PI*(diam*diam))/4;
    slice = static_cast<int>(area)/static_cast<int>(sarea);
    
    //Display results 
    cout<<"everyone get "<<slice<<" pizza slices"<<endl;
            

    return 0;
}

