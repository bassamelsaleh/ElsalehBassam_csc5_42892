/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bassam
 *
 * Created on February 25, 2016, 2:33 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
        cout<<"problem 3"<<endl; //problem 2 in Gaddis chapter 2
    float staTx, counTx, sale;//state tax, country tax, what is the purchase 
    staTx = 0.04;//state tax =4%
    counTx = 0.02;//country tax = 2%
    sale = 95;//how much our charge is in dollars
    cout<<"the toatal sales tax on a $95 product is $"<<sale*counTx+sale*staTx<<endl;//total sales tax of $95 in dollars

    return 0;
}

