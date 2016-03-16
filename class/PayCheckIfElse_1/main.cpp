/* 
 * File:   main.cpp
 * Author: Bassam
 * March 16, 2016
 *Purpose Dependent if
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
    if(hrsWrkd <= ovrTime)payChk=hrsWrkd*payRate;
    if(hrsWrkd >   ovrTime)payChk=hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate;
    if(hrsWrkd < 0 || hrsWrkd >98)payChk=0;
    //output the results
    cout<<"Paycheck = $"<<payChk<<" for "
            <<hrsWrkd<<" hours @ $"<<payRate<<"/hr."<<endl;
            
    
    
    return 0;
}

