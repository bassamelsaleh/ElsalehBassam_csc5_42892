/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 9, 2016, 9:24 AM
 */

#include <iostream>

using namespace std;

//user

//global variables

//functions
void showValue(int); 

int main(int argc, char** argv) {
    const int SIZE=8;
    int number[SIZE]={};
    for (int index=0;index<SIZE;index++){
        cout<<"input"<<endl;
        cin>>number[index];
    }
    
    for (int count=0;count<SIZE; count++){
        showValue(number[count]);
    }
    return 0;
}

void showValue(int num){
    cout<<num<<" ";
}

