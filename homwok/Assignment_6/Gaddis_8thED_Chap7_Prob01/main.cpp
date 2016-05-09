/* 
 * File:   main.cpp
 * Author: Bassam
 * Home Work Problems
 * Created on May 9, 2016, 12:54 PM
 */

#include <iostream>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int SIZE=10;
    int in[SIZE]={};
    int min=0;
    int max=0;
    
    cout<<"Input any 10 numbers"<<endl;
    for(int count=0;count<SIZE;count++){
        cin>>in[count];
    }
    
        cout<<endl;
    min=in[0];
    for (int count=0;count<SIZE-1;count++){
       if(in[count]>in[count+1] && in[count+1]<min){
        min=in[count+1];
        }
        else;
        }
    max=in[0];
    for (int count=0;count<SIZE-1;count++){
       if(in[count]<in[count+1] && in[count+1]>max){
        max=in[count+1];
        }
        else;
        
    }
    
    cout<<"The lowest numbers is "<<min<<endl;
    cout<<"The highest numbers is "<<max<<endl;
    return 0;
}