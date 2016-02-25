/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bassam
 *
 * Created on February 25, 2016, 2:39 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"problem 6"<<endl; //problem 6 in Gaddis chapter 2
    short int payAmt, payPir, anPay;//Pay amount, pay periods, annual pay  
    payAmt = 2200.0;// the income received  per income in dollars 
    payPir = 26;//how many pay periods their are
    anPay = payAmt*payPir;//what is the annual pay 
    cout<<"the employ will receive $"<<anPay<<" this year"<<endl;//display what they will receive within a year in dollars

    return 0;
}

