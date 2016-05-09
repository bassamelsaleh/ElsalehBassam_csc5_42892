/* 
 * File:   main.cpp
 * Author: Bassam
 * Home Work Problems
 * Created on May 9, 2016, 12:54 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//user

//global variables

//functions
void enter(int[],int,int);

int main(int argc, char** argv) {
    const int SIZE=5;
    int number[SIZE]={1,15,3,548,21};
    int n;
    cout<<"Enter the number for n: "<<endl;
    cin>>n;
    cout<<endl;
    enter(number, n, SIZE);    
    return 0;
}
void enter(int num[], int n, int size){
    for (int count=0; count<size;count++){
        if (n=num[count]){
            cout<<num[count]<<endl;
        }
    }
    
}