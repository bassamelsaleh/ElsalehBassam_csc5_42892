/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Gaddis ch.6 prob. 04
 * Created on April 21, 2016, 10:53 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global variables

//User variables

//Functions
int sale();
void winner(int, int, int, int, int);
int main(int argc, char** argv) {
    int a;
    int b;
    int c;
    int d;
    int e;
    int in;
    
    cout<<"North ";
    in=sale();
    a=in;
    
    cout<<"South ";
    in=sale();
    b=in;
    
    cout<<"East ";
    in=sale();
    c=in;
    
    cout<<"West ";
    in=sale();
    d=in;
    
    cout<<"Central ";
    in=sale();
    e=in;
    
    winner(a,b,c,d,e);

    return 0;
}

int sale(){
    int in;
    do{
    cout<<"how many automobile accidents were reported?"<<endl;
    cin>>in;
    
    if(in<0){
        cout<<"Please enter a positive number"<<endl;
    }
    }while (in < 0);
    return in;
}

void winner (int a, int b, int c, int d, int e){
    if(a<b && a<c && a<d && a<e){
        cout<<"North had the lowest automobile accidents with a total of "<<a<<endl;
    }
    else if(b<a && b<c && b<d && b<e){
        cout<<"South had the lowest automobile accidents with a total of "<<b<<endl;
    }
    else if(c<b && c<a && c<d && c<e){
        cout<<"East had the lowest automobile accidents with a total of "<<c<<endl;
    }
    else if(d<b && d<a && d<c && d<e){
        cout<<"West had the lowest automobile accidents with a total of "<<d<<endl;
    }
    else if (e<a && e<b && e<c && e<d){
        cout<<"Central had the lowest automobile accidents with a total of "<<e<<endl;
    }
    else {
        cout<<"There was a tie";
    }
}