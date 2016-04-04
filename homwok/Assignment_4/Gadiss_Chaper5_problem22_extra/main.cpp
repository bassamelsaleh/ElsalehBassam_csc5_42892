/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * more practice
 * Created on April 4, 2016, 10:14 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    int h, w, pick;
    h=1;
    
    cin>>pick;
    if (pick <=15)
    do{
        w=1;
        while(w<=pick){
            cout<<"x";
            w++;
        }
        h++;
        cout<<endl;
    }while (h<=pick);
    else{
        cout<<"Error"<<endl;
    }

    return 0;
}