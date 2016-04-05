/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 *
 * Created on April 4, 2016, 10:14 AM
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;


int main(int argc, char** argv) {
   //set variables
    float sum, x,a,n;
    cout<<"Enter the term for X."<<endl;
    cin>>x;
    cout<<"How many terms will be added?"<<endl;
    cin>>n;
    
    //start a at 0
    a=0;
    sum=0;
    while (a<n){
        
        sum+=(n-a)/pow(x,a);
        a++;
        
    }
    cout<<"the sum is "<<sum<<endl;
    
}