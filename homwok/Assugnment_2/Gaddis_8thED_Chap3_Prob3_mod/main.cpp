/* 
 * Author: Bassam Elsaeh
 * Created on February 29, 2016, 9:49 AM
 * purpose: Treadmill Readout Conversion
 */

// System Libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants
const float lf(32);//freezing point fahrenheit
const float hf(212);//boiling point fahrenheit
const float lc(0);//freezing point celsius
const float hc(100);//boiling point celsius


int main(int argc, char** argv) {
    //declare variables
    float m=5.0f/9; //slope 
    float b=-32.0f*m;//intercept
    float cLin, cIntrp, f;//degree c linear/ interplated and defree F
    
    //input value for f
    cout<<"input a value that is between 32-212"<<endl;
    cin>>f;
    
    //calculations  
    cLin= m*f+b;
    cIntrp=lc+(hc-lc)*(f-lf)/(hf-lf);
    
    //output results
    cout<<"both equation one and two should be the same"<<endl;
    cout<<cLin<<"="<<cIntrp;
    
    
    

    return 0;
}

