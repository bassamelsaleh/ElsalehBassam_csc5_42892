/* 
 * Author: Bassam Elsaleh
 * 3/7/2016
 * purpose: Loan
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//user libraries

//Global Constants

int main(int argc, char** argv) {
    //declare variables
    float rad; //enter the value wanted in Rad
    float ta; //tangent result
    float si; //sign result
    float co; //cos result
    
    //input the number wanted
    cout<<"Input the number you want in Rad"<<endl;
    cin>>rad;
    cout<<endl;
    
    //calculations and outputs
    cout<<setprecision(5)<<"The tan of "<<rad<<" is = "<<tan(rad)<<endl;
    cout<<setprecision(5)<<"The sin of "<<rad<<" is = "<<sin(rad)<<endl;
    cout<<setprecision(5)<<"The cos of "<<rad<<" is = "<<cos(rad)<<endl;
       
    return 0;
}

