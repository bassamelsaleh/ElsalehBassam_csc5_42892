/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 9, 2016, 9:24 AM
 */

#include <iostream>
#include <fstream>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int ARRAY_S = 10;//array size
    int numbers[ARRAY_S];   //array with 10 elements
    int count = 0;          //loop counter variable
    ifstream inputFile;     //input fine stream object
    
    //open the file.
    inputFile.open("TenNumbers.txt");
    
    //Read the numbers from the file into the array.
    while (count<ARRAY_S && inputFile>>numbers[count])
        count++;
    
    //Close the file.
    inputFile.close();
    
    //Display the numbers read:
    cout<<"the numbers are: ";
    for (count=0; count<ARRAY_S; count++)
        cout <<numbers[count]<<" ";
    cout<<endl;    

    return 0;
}

