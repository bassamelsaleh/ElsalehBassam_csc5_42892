/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bassam
 *
 * Created on February 25, 2016, 1:30 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float arclnd, lnd, fLnd;// one arc land, the land we we're calculating, our final outcome. using float to get exact answer to 6 sig figures 
    arclnd = 43560; // arc land in square feet
    lnd = 391876;// the land we are calculating 
    fLnd = lnd/arclnd;//the conversion  to acres
    cout<<"the amout of 391876 square feet is equivalent to "<<fLnd<<" acres"<<endl;// display the conversion
            

    return 0;
}

