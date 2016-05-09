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

int main(int argc, char** argv) {
    const int NUM_E=6;  //Number of employees
    int hours[NUM_E];
    int count;
    
    //Input the hours worked
    for (count=0; count<NUM_E; count++){
        cout<<"Enter the hours worked by the employee "
                <<(count+1)<<": ";
        cin>>hours[count];
    }
    //display the contents of the array.
    cout<<"The hours you entered are:";
    for (count=0; count<NUM_E; count++){
        cout<<" "<<hours[count];
    }
    cout<<endl;
    return 0;
}

