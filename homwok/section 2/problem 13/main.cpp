/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bassam
 *
 * Created on February 25, 2016, 2:26 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float prof, price, make; //profit percentage, what the price is, how much they are making
    price = 14.95;// the price of the board in dollars
    prof = 0.33545;// what the percent of their profit is
    make = price*prof;// what they make per unit
    cout<<"the compony profits $"<<make<<"for every board bought"<<endl;//display the outcome
            
            
            

    return 0;
}

