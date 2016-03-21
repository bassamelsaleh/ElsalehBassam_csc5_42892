/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose - lottery
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare variables 
        float lot, sumP, tax, marr, val, valT, valM;
        //set variables
        sumP = 0.38;
        tax = 0.52;
        marr = 0.50;
        //input winnings
        cout<<"enter winnings"<<endl;
        cin>>lot;
        //calculations
        val = lot*sumP;
        valT = val-val*tax;
        valM = valT*marr;
        //output results 
        cout<<"You win "<<val<<" after the lump sum that was taken out."<<endl;
        cout<<"You get "<<valT<<" after tax."<<endl;
        cout<<"Finally, if you are married you will have."<<valM<<endl;
   
    
    return 0;
}

