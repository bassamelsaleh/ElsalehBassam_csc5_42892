/* 
 * File:   main.cpp
 * Author: Bassam
 * Going through the concept problems in chapter 6 
 * Pg. 316 Ch 6.5 program 6-9
 * Created on April 19, 2016, 11:55 AM
 */

#include <iostream>

using namespace std;

//Function 
void changeMe(int);

int main(int argc, char** argv) {
    int number = 12;
    
    //Display the vale in number
    cout<<"number in "<<number <<endl;
    
    //Call changeMe, passing the value in number
    //as an argument.
    changeMe(number);
    
    //Display the value in number again.
    cout<<"Now back in main agian, the value of ";
    cout<<"number is "<<number <<endl;
    return 0;
}

void changeMe(int myValue)
{
    //change the value of my value to 0.
    myValue = 0;
    
    //Display the value in myValue.
    cout<<"Now the value is "<<myValue <<endl;
}