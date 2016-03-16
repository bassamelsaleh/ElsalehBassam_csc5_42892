/* 
 * File:   main.cpp
 * Author: rcc
 * Created on March 16, 2016, 8:50 AM
 */

#include <iostream>
#include <cstring>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable
    const int SIZE=15;
    char a[SIZE], b[SIZE], c[SIZE];
    
    //input values
    cout<<"enter first name.";
    cin.getline(a,SIZE);
    cout<<"enter second name.";
    cin.getline(b,SIZE);
    cout<<"enter third name.";
    cin.getline(c,SIZE);
    
    //map the inputs to the outputs
    if (strcmp(a, b)== 0)
    {
        if(strcmp(b, c)==0)
   
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    //output the results
    
            
    
    
    return 0;
}

