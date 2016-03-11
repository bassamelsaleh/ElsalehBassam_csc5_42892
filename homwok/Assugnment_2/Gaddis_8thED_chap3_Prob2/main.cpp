/* 
 * File:   main.cpp
 * Author: Bassam
 *
 * Created on March 11, 2016, 11:18 AM
 */
#include <iostream>
#include <iomanip>
using namespace std;

//user libraries

//Global Constants

int main(int argc, char** argv) {
    //declare variables
    float clA; // class A seating
    float clB; // class B seating
    float clC; // class C seating
    float amtA; //the price of x amount of seatings in class A
    float amtB; //the price of x amount of seatings in class B
    float amtC; //the price of x amount of seatings in class C
    
    //output how many seats in each class    
    cout<<"How manny seats are wanted in class A."<<endl;
    cin>>clA;
    cout<<"How manny seats are wanted in class B."<<endl;
    cin>>clB;
    cout<<"How manny seats are wanted in class C."<<endl;
    cin>>clC;
    
    //calculations 
    amtA = 15*clA;
    amtB = 12*clB;
    amtC = 9*clC;

    //output results
    cout<<setprecision(2)<<fixed<<showpoint<<"For "<<clA<<" seats in class A, it will be $"<<amtA<<endl;
    cout<<setprecision(2)<<fixed<<showpoint<<"For "<<clB<<" seats in class A, it will be $"<<amtB<<endl;
    cout<<setprecision(2)<<fixed<<showpoint<<"For "<<clC<<" seats in class A, it will be $"<<amtC<<endl;
    cout<<setprecision(2)<<fixed<<showpoint<<"Your total is $"<<amtA+amtB+amtC<<endl;
    
    return 0;
}

