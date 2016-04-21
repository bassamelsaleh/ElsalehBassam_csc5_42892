/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Gaddis ch.6 prob. 03
 * Created on April 21, 2016, 10:53 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global variables

//User variables

//Functions
int sale();
void winner(int, int, int, int);
int main(int argc, char** argv) {
    int a;
    int b;
    int c;
    int d;
    int in;
    
    cout<<"Northeast Division ";
    in=sale();
    a=in;
    
    cout<<"Southwest Division ";
    in=sale();
    b=in;
    
    cout<<"Northwest Division ";
    in=sale();
    c=in;
    
    cout<<"Southwest Division ";
    in=sale();
    d=in;
    
    winner(a,b,c,d);

    return 0;
}

int sale(){
    int in;
    do{
    cout<<"How much did you make?"<<endl;
    cin>>in;
    
    if(in<0){
        cout<<"Please enter a positive number"<<endl;
    }
    }while (in < 0);
    return in;
}

void winner(int a, int b, int c, int d){
    if(a>b, a>c, a>d){
        cout<<"Northeast Division wins"<<endl;
    }
    else if(b>a, b>c, b>d){
        cout<<"Southwest Division wins"<<endl;
    }
    else if(c>b, c>a, c>d){
        cout<<"Northwest Division wins"<<endl;
    }
    else if(d>b, d>a, d>c){
        cout<<"Southwest Division wins"<<endl;
    }
    else {
        cout<<"there was a tie";
    }
}