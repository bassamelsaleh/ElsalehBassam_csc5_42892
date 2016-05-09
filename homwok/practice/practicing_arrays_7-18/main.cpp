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
void showValue(int[],int); 

int main(int argc, char** argv) {
    const int SIZE1=8;
    const int SIZE2=5;
    int set1[SIZE1]={5,50,15,20,25,30,35,40};
    int set2[SIZE2]={2,4,6,8,10};
    showValue(set1,SIZE1);
    showValue(set2,SIZE2);
    return 0;
}

void showValue(int num[], int size){
    for(int count=0; count<size;count++)
        cout<<num[count]<<" ";
    cout<<endl;
    
}

