/* 
 * File:   main.cpp
 * Author: Bassam
 * HomeWork Problems
 * Created on May 23, 2016, 1:43 PM
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int SIZE=10;
    int in[SIZE]={};
    int user;
    int wnumb;
    unsigned seed = time(0);
    
    //Lucky numbers
    in[0]=13579;
    in[1]=26791;
    in[2]=26792;
    in[3]=33445;
    in[4]=55555;
    in[5]=62483;
    in[6]=77777;
    in[7]=79422;
    in[8]=85647;
    in[9]=93121;
   
    
    srand(seed);
    wnumb = rand() % 99999 + 10000;
 
    
    int beg=0,end=SIZE-1,middle=0,ans=0;
    while(end>=beg){
        middle=(beg+end)/2;
        if(in[middle]==wnumb){
            cout<<"Winner"<<endl;
            ans=1;
            break;
        }
        else if(in[middle]>wnumb)end=middle-1;
        else beg=middle+1;
        
    }
    if(ans==0){
        cout<<"Loser";
    }
    
    
    
    
    return 0;
}