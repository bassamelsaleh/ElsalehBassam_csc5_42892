/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bassam
 *
 * Created on February 25, 2016, 2:32 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"problem 2"<<endl; //problem 2 in Gaddis chapter 2
    float yrsal, persal, gen;// sale this year, percent of total sales, generated income
    yrsal = 8.6e9;//set year sale in dollars 
    persal = 0.58;//set percent of total sales
    gen = yrsal*persal;// this is the generated income after set price in dollars 
    cout<<"this year the east coast sales division will generated $"<<gen<<endl;//Display results of generated money in dollars

    return 0;
}

