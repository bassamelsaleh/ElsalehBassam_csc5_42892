/* 
 * File:   main.cpp
 * Author: Bassam
 * Created on February 25, 2016, 2:30 PM
 */

//System Libraries
#include <iostream>
using namespace std;


//User libraries


//Global constants

int main(int argc, char** argv) {
    cout<<"problem 3"<<endl; //problem 2 in Gaddis chapter 2
    
    //declare variables
    float staTx, counTx, sale;//state tax, country tax, what is the purchase 
    
    //input values
    staTx = 0.04;//state tax =4%
    counTx = 0.02;//country tax = 2%
    sale = 95;//how much our charge is in dollars
    
    //display the solution 
    cout<<"the toatal sales tax on a $95 product is $"<<sale*counTx+sale*staTx<<endl;//total sales tax of $95 in dollars

    return 0;
}

