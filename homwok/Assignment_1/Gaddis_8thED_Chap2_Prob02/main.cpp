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
    cout<<"problem 2"<<endl; //problem 2 in Gaddis chapter 2
    //declare variables
    float yrsal, persal, gen;// sale this year, percent of total sales, generated income
   
    //set values to variables
    yrsal = 8.6e9;//set year sale in dollars 
    persal = 0.58;//set percent of total sales
    
    //calculate the generated income
    gen = yrsal*persal;
    
    //display the results
    cout<<"this year the east coast sales division will generated $"<<gen<<endl;//Display results of generated money in dollars

    return 0;
}

