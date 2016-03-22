/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- coin game
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
    float pen, nick, dim, qu, p, n, d, q, tot;
    
    //input values
    cout<<"Enter the amount of change that will make a dollar"<<endl;
    cout<<"Enter the number of pennies."<<endl;
    cin>>pen;
    cout<<"Enter the number of nickels."<<endl;
    cin>>nick;
    cout<<"Enter the number of dimes."<<endl;
    cin>>dim;
    cout<<"Enter the number of quarters."<<endl;
    cin>>qu;
    
    //calculations
    p = pen*0.01f;
    n = nick*0.05f;
    d = dim*0.1f;
    q = qu*0.25f;
    tot = q+d+n+p;
    
    //output
    if (tot < 1){
        cout<<"You are under one dollar."<<endl;
    }
    else if (tot == 1){
        cout<<"Congrats you hit one dollar."<<endl;
    }
    else{
        cout<<"yYou are over one dollar."<<endl;
    }

    return 0;
}

