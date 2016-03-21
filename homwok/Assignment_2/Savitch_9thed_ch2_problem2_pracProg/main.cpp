/* 
 * Author: Bassam Elsaleh
 * 3/7/2016
 * purpose : Babylonian Square Root Approximation
 */

#include <iostream>
#include <cmath>

using namespace std;

//user libraries

//Global Constants

int main(int argc, char** argv) {
    //declare variables
    float guess, n, r;
    
    //input the number to square root
    cout<<"enter the value of the number you want the square root of?"<<endl;
    cin>>n;
    
    //calculations the first approximation
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    //output results
    cout<<"the first approximation = square root("<<n<<")= r("
            <<r<<"),guess("<<guess<<")"<<endl;
    
    
     //calculations the second approximation
    r=n/guess;
    guess=(guess+r)/2;
    //output results
    cout<<"the second approximation = square root("<<n<<")= r("
            <<r<<"),guess("<<guess<<")"<<endl;
    
         
    //calculations the third approximation
    r=n/guess;
    guess=(guess+r)/2;
    //output results
    cout<<"the third approximation = square root("<<n<<")= r("
            <<r<<"),guess("<<guess<<")"<<endl;
    
    
    //calculations the forth approximation
    r=n/guess;
    guess=(guess+r)/2;
    //output results
    cout<<"the forth approximation = square root("<<n<<")= r("
            <<r<<"),guess("<<guess<<")"<<endl;
    
    //calculations the fifth approximation
    r=n/guess;
    guess=(guess+r)/2;
    //output results
    cout<<"the fifth approximation = square root("<<n<<")= r("
            <<r<<"),guess("<<guess<<")"<<endl;
    
    //calculations the sixth approximation
    r=n/guess;
    guess=(guess+r)/2;
    //output results
    cout<<"the sixth approximation = square root("<<n<<")= r("
            <<r<<"),guess("<<guess<<")"<<endl;
    

    //Exit Stage Left
    return 0;
}

