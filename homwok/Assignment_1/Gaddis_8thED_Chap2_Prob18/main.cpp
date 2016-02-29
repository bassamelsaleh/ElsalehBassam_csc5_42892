/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bassam
 *
 * Created on February 25, 2016, 2:36 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"problem 18"<<endl; //problem 18 in Gaddis chapter 2
    float con, edcon, cfcon;// con = consumer, edcon = enerdy drink consumer, cfcon = citrus-flavored consumer
    con = 16500;//set con = to amount of survey consumers
    edcon = con*.15;//this is equal to the amount of consumers who buy their energy drinks
    cfcon = edcon*.58;//of those who bought energy drinks this many liked the citrus-flavored
    cout<< "the approximate number of consumers who purchase energy drinks is "<<edcon<<endl;//announcing the number of consumers who buy their energy drinks from the survey
    cout<<"of those "<<cfcon<<" prefer citrus-flavored energy drinks"<<endl;////announce the outcome of results 
    
    

    return 0;
}

