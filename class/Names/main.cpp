/* 
 * File:   main.cpp
 * Author: rcc
 * Created on March 16, 2016, 8:50 AM
 */

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable
    const int SIZE=15;
    char a[SIZE], b[SIZE], c[SIZE];
    
    //input values
    cout<<"enter first name."<<endl;
    cin.getline(a,SIZE);
    cout<<"enter second name."<<endl;
    cin.getline(b,SIZE);
    cout<<"enter third name."<<endl;
    cin.getline(c,SIZE);
    
    //map the inputs to the outputs
    if (strcmp(a,b)==0)
    {
        if (strcmp(c,b)==0)
        cout<<a<<". "<<b<<". "<<c<<endl;
    }
    else if (strcmp(a, b)< 0)
    {
        if(strcmp(b,c)<0)
        cout<<a<<". "<<b<<". "<<c<<endl;
        else if (strcmp(c,b)<0)
            cout<<a<<". "<<c<<". "<<b<<endl;
    }
    else if (strcmp(b,a)<0)
    {
        if(strcmp(a,c)<0)
        cout<<b<<". "<<a<<". "<<c<<endl;
        else if (strcmp(c,a)<0)
            cout<<b<<". "<<c<<". "<<a<<endl;
    }
        else if (strcmp(c,a))
        {
            if(strcmp(a,b)<0)
        cout<<c<<". "<<a<<". "<<b<<endl;
        else if (strcmp(b,a)<0)
            cout<<c<<". "<<b<<". "<<a<<endl;
        }
    

    
    //output the results
    
            
    
    
    return 0;
}

