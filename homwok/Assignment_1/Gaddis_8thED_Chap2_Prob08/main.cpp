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
    
    cout<<"problem 8"<<endl;//problem 8 in Gaddis chapter 2
    
    //Declare Variables
    float itm1, itm2, itm3, itm4, itm5, stot, salTax, total;// item 1-5, toatal of all itmes, that tax of all items, the final total
    
    //Input Values
    itm1 = 15.95; // the price of item one in $
    itm2 = 24.95; // the price of item two in $
    itm3 = 6.95; // the price of item three in $
    itm4 = 12.95; // the price of item four in $
    itm5 = 3.95; // the price of item five in $
    salTax = 0.07;// set the sales tax
    
    //calculate 
    stot = itm1+itm2+itm3+itm4+itm5;// all items added up
    total =stot+stot*salTax;// solve the total of all 5 items and includes the taxes
    
    //Display Results
    cout<<"the 5 items cost $"<<stot<<" and with the sales tax of 7% your total is $"<<total<<endl;// display the amount for all 5 products 
    return 0;
}

