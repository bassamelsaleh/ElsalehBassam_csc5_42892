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
    
    cout<<"problem 6"<<endl; //problem 6 in Gaddis chapter 2
    
    //declare veriables
    short int payAmt, payPir, anPay;//Pay amount, pay periods, annual pay  
    
    //input values
    payAmt = 2200.0;// the income received  per income in dollars 
    payPir = 26;//how many pay periods their are
    
    //calculate 
    anPay = payAmt*payPir;//what is the annual pay 
    
    //Display Results  
    cout<<"the employ will receive $"<<anPay<<" this year"<<endl;//display what they will receive within a year in dollars

    return 0;
}

