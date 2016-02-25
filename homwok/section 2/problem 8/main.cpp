/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bassam
 *
 * Created on February 25, 2016, 1:24 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"problem 8"<<endl;//problem 8 in Gaddis chapter 2
    float itm1, itm2, itm3, itm4, itm5, stot, salTax, total;// item 1-5, toatal of all itmes, that tax of all items, the final total
    itm1 = 15.95; // the price of item one in $
    itm2 = 24.95; // the price of item two in $
    itm3 = 6.95; // the price of item three in $
    itm4 = 12.95; // the price of item four in $
    itm5 = 3.95; // the price of item five in $
    stot = itm1+itm2+itm3+itm4+itm5;// all items added up
    salTax = 0.07;// set the sales tax
    total =stot+stot*salTax;// solve the total of all 5 items and includes the taxes
    cout<<"the 5 items cost $"<<stot<<" and with the sales tax of 7% your total is $"<<total<<endl;// display the amount for all 5 products 
    return 0;
}

