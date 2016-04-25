/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Gaddis ch.6 prob. 08
 * Created on April 21, 2016, 10:53 AM
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global variables

//User variables

//Functions
void flip(int);

int main(int argc, char** argv) {
    int coin;
    
    cout<<"How many time do you want to flip the coin?"<<endl;
    cin>>coin;
    flip(coin);
    return 0;
}


void flip(int coin){
    int land;
    const int min=1;
    const int max=2;
    int counth=0;
    int countt=0;
            
    for(int count=0 ; count<coin ; count++){
    land=(rand()%(max-min+1))+min;
    unsigned seed = time(0);
    
    if (land==1){
        cout<<"Heads"<<endl;
    }
    else {
        cout<<"Tails"<<endl;
}
    }
}

