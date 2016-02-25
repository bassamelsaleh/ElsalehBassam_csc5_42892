/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bassam
 *
 * Created on February 18, 2016, 2:20 PM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
  cout<<"problem 15"<<endl; // problem 15 in Gaddis chapter 2
    cout<<"   *"<<endl; //will show a star on the top center
    cout<<"  ***"<<endl;// 3 starts will appear 
    cout<<" *****"<<endl;// 5 stars will appear
    cout<<"*******"<<endl;// 7 stars will appear
    
   
    cout<<"_"<<endl;//make a space between problems 
    
    cout<< "problem 16"<<endl;//problem 16 in Gaddis chapter 2
    cout<<"   *"<<endl; //will show a star on the top center
    cout<<"  ***"<<endl;// 3 starts will appear 
    cout<<" *****"<<endl;// 5 stars will appear
    cout<<"*******"<<endl;// 7 stars will appear
    cout<<" *****"<<endl;// 5 stars will appear
    cout<<"  ***"<<endl;// 3 starts will appear 
    cout<<"   *"<<endl; //will show a star on the top center
    
   
    cout<<"_"<<endl;//make a space between problems 
    
    cout<<"problem 18"<<endl; //problem 18 in Gaddis chapter 2
    int con, edcon, cfcon;// con = consumer, edcon = enerdy drink consumer, cfcon = citrus-flavored consumer
    con = 16500;//set con = to amount of survey consumers
    edcon = con*.15;//this is equal to the amount of consumers who buy their energy drinks
    cfcon = edcon*.58;//of those who bought energy drinks this many liked the citrus-flavored
    cout<< "the approximate number of consumers who purchase energy drinks is "<<edcon<<endl;//announcing the number of consumers who buy their energy drinks from the survey
    cout<<"of those "<<cfcon<<" prefer citrus-flavored energy drinks"<<endl;////announce the outcome of results 
    
    
    cout<<"_"<<endl;//make a space between problems 
    
    cout<<"problem 1"<< endl; //problem 1 in Gaddis chapter 2
    int sum;// set sum as a variable  
    sum = 50+100;//give value to variable sum
    cout<<"the sum of 50+100="<<sum<<endl;//Display results 
    
    
    cout<<"-"<<endl;// make space between problems 
    
    cout<<"problem 2"<<endl; //problem 2 in Gaddis chapter 2
    float yrsal, persal, gen;// sale this year, percent of total sales, generated income
    yrsal = 8.6e9;//set year sale in dollars 
    persal = 0.58;//set percent of total sales
    gen = yrsal*persal;// this is the generated income after set price in dollars 
    cout<<"this year the east coast sales division will generated $"<<gen<<endl;//Display results of generated money in dollars 
    
    
    cout<<"_"<<endl; //make space between problems
    
    cout<<"problem 3"<<endl; //problem 2 in Gaddis chapter 2
    float staTx, counTx, sale;//state tax, country tax, what is the purchase 
    staTx = 0.04;//state tax =4%
    counTx = 0.02;//country tax = 2%
    sale = 95;//how much our charge is in dollars
    cout<<"the toatal sales tax on a $95 product is $"<<sale*counTx+sale*staTx<<endl;//total sales tax of $95 in dollars
    
    
    cout<<"-"<<endl;//make space between problems
    
    cout<<"problem 6"<<endl; //problem 6 in Gaddis chapter 2
    int payAmt, payPir, anPay;//Pay amount, pay periods, annual pay  
    payAmt = 2200.0;// the income received  per income in dollars 
    payPir = 26;//how many pay periods their are
    anPay = payAmt*payPir;//what is the annual pay 
    cout<<"the employ will receive $"<<anPay<<" this year"<<endl;//display what they will receive within a year in dollars
    
    
    cout<<"-"<<endl;//make a space between problems 
    

    return 0;
}

