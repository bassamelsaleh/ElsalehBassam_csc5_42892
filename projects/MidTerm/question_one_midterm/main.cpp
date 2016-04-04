/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 4, 2016, 10:14 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    int h, w,s,a , pick;
    h=1;
    a=1;
    s=0;
    w=1;
    cin>>pick;
    if (pick <=15)
    do{
        w=1;
        while(w<pick/2){
            cout<<setw(s+1)<<pick<<setw(3)<<setw(pick-2)<<a<<endl;
            s++;
            pick--;
            a++;
        }
        h++;
        
    }while (h<=pick);
    else{
        cout<<"Error"<<endl;
    }

    return 0;
}
