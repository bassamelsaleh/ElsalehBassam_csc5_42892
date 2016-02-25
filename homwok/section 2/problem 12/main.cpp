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
    long int arclnd, lnd, fLnd;// one arc land, the land we we're calculating, our final outcome.
    arclnd = 43560; // arc land in square feet
    lnd = 391876;// the land we are calculating 
    fLnd = lnd/arclnd;
    cout<<"the amout of 391876 square feet is equivalent to "<<fLnd<<" acres"<<endl;
            

    return 0;
}

