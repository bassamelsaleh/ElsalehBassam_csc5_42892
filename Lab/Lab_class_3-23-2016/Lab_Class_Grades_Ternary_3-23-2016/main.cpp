/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Purpose: ternary operator grade
 * Mar 23rd, 2016
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare variables
    float grade;
    
    //input percentage
    cout<<"Input Percentage Grade"<<endl;
    cin>>grade;
    
    //output results
    cout<<((grade <60)? "F":
    (grade <70)? "D":
    (grade <80)? "C":
    (grade <90)? "B":
    (grade <100)? "A":"Inputted grade is higher than 100%")<<endl;
    return 0;
}

