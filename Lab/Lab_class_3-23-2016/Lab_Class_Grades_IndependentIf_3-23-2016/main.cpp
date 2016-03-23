/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Purpose: Independent If's grade
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
    if (grade < 60){
        cout<<"F"<<endl;
    }
    if ((grade >= 60) && (grade < 70)){
        cout<<"D"<<endl;
    }
    if ((grade >= 70) &&(grade < 80)){
        cout<<"C"<<endl;
    }
    if ((grade >= 80) &&(grade < 90)){
        cout<<"B"<<endl;
    }
    if ((grade >=90)&& (grade <= 100)){
        cout<<"A"<<endl;
    }
    return 0;
}

