/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Purpose: switch grade
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
    int grade;
    
    //input percentage
    cout<<"Input Percentage Grade"<<endl;
    cin>>grade;
    grade= grade/10;
   
    //output results 
    switch (grade){
    case 10:
    case 9: {
        cout<<"A";
        break;
    }
    case 8:{
        cout<<"B";
    break;
    }
    case 7: {
        cout<<"C";
    break;
    }
    case 6: {
        cout<<"D";
        break;
    }
    default: cout<<"F";
    }
    return 0;
}

