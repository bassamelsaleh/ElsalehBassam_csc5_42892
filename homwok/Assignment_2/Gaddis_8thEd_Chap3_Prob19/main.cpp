/* 
 * Author: Bassam Elsaleh
 * 3/7/2016
 * purpose: Loan
 */

#include <iostream>
#include <cmath>

using namespace std;

//user libraries

//Global Constants

int main(int argc, char** argv) {
    //declare variables
    int  loan;
    float mPay, rate, payment, top, bot, temp, chB;
    
    //Input variables
    loan = 10000;
    mPay = 36;
    rate = 0.01;
    temp = pow(1+rate, mPay);
    top = rate*temp;
    bot = temp-1;
    
    //calculation  
    payment = top/bot*static_cast<float>(loan);
    
    //output results
    cout<<"you monthly payment is $"<<payment<<endl;
    
    //equation for cheek back
    chB=payment*(temp-1)/(temp*rate);
    
    //output results--check math should be 10000 with the set variables  
    cout<<"you loan should be $"<<chB<<endl;
    
    
    

    return 0;
}

