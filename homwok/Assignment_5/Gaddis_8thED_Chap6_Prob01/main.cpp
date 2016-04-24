/* 
 * File:   main.cpp
 * Author: Bassam
 * Home work problems Ch. 6 Prob. 01
 * Created on April 20, 2016, 1:15 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
//User libraries

//Global constants

//Functions
void calculateRetail(float,float);
int main(int argc, char** argv) {
    float sale;
    float mark;
    
    cout<<"What is the wholesale cost?"<<endl;
    cin>>sale;
    while (sale<0){
        cout<<"You have inputed a negative number"<<endl;
        cin>>sale;
    
    }
    
    cout<<"What is the markup in decimal form?"<<endl;
    cin>>mark;
    while (mark<0){
        cout<<"You have inputed a negative number"<<endl;
        cin>>mark;
    }
    
    calculateRetail(sale,mark);

    return 0;
}

void calculateRetail(float sale, float mark){
    sale=sale*mark+sale;
    cout<<setprecision(2)<<fixed;
    cout<<"The cost is $"<<sale<<endl;
}