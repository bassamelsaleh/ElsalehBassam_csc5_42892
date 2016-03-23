/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Purpose: Dependent If's grade
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
    else if ((grade >= 60) && (grade < 70)){
        cout<<"D"<<endl;
    }
    else if ((grade < 80)){
        cout<<"C"<<endl;
    }
    else if ((grade < 90)){
        cout<<"B"<<endl;
    }
    else if ((grade <= 100)){
        cout<<"A"<<endl;
    }
    return 0;
}

