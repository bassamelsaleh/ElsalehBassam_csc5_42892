/* 
 * File:   main.cpp
 * Author: Bassam
 * March 16, 2016
 *Purpose Ternary
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable
    float payRate, hrsWrkd, payChk;
    float ovrTime=40;// where over time begins
    
    //input values
    cout<<"input Pay Rate ($'s/hr) and hours worked both dd.dd format"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //map the inputs to the outputs
    payChk=(hrsWrkd < 0)?0:
           (hrsWrkd <= ovrTime)?hrsWrkd*payRate:
           (hrsWrkd <= 98)?hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate:0;
    //output the results
    cout<<"Paycheck = $"<<payChk<<" for "
            <<hrsWrkd<<" hours @ $"<<payRate<<"/hr."<<endl;
            
    
    
    return 0;
}

