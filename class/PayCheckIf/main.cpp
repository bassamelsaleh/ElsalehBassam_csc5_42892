/* 
 * File:   main.cpp
 * Author: rcc
 * Created on March 16, 2016, 8:50 AM
 * Purpose: Independent if
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare Variable
    float payRate, hrsWrkd, payCheck;
    float ovrTime=40;// where over time begins
    
    //input values
    cout<<"input Pay Rate ($'s/hr) and hours worked both dd.dd format"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //map the inputs to the outputs
    if(hrsWrkd <= ovrTime)payCheck=hrsWrkd*payRate;
    if(hrsWrkd >   ovrTime)payCheck=hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate;
    
    //output the results
    cout<<"Paycheck = $"<<payCheck<<" for "
            <<hrsWrkd<<" hours @ $"<<payRate<<"/hr."<<endl;
            
    
    
    return 0;
}

