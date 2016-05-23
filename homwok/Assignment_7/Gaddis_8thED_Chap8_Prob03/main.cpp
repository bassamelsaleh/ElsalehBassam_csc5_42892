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
 
    int ans;
    for (int i=0; i<1; i++){
        int ans;
        for (int count = 0; count < SIZE; count++) {
            if (wnumb == in[count]) {
                ans = 1;
            }
        }
        if (ans != 1) {
            cout << "Try Again next time" << endl;
        }
        else {
            cout << "You Win" << endl;
        }
    }
    
    
    return 0;
}