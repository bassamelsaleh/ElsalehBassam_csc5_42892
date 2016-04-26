/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Gaddis ch.6 prob. 23
 * Created on April 21, 2016, 10:53 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//Global variables

//User variables

//Functions
void flip();

int main(int argc, char** argv) {
    cout<<"All of the prime numbers are "<<endl;
    flip();
            
    return 0;
}


void flip(){
    int a=2;
    cout<<"1\n3\n5\n7"<<endl;
    while(a<=100){
        if((a%2==0)||(a%3==0)||(a%4==0)||(a%5==0)||(a%6==0)||(a%7==0)||(a%8==0)||(a%9==0)){
            
        }
        else {
            cout<<a<<endl;
        }
        a++;
    }
}

