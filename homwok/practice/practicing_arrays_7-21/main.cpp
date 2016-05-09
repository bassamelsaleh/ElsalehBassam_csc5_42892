/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 9, 2016, 9:24 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int NUM=3;
    const int NUM2=4;
    float sale[NUM][NUM2];
    float tsale=0;
    int div, qtr;
    
    cout <<"The will calculate the total sales of"<<endl;
    cout<<" all the company's divisions."<<endl;
    cout<<"Enter the following sales information: \n\n";
    
    for (div=0;div<NUM;div++){
        for(qtr=0; qtr<NUM2;qtr++){
            cout<<"Division "<<(div+1);
            cout<<", Quarter "<<(qtr+1)<<": $";
            cin>>sale[div][qtr];
        }
        cout<<endl;
    }
    for (div=0;div<NUM;div++){
        for (qtr=0; qtr<NUM2; qtr++);{
            tsale+=sale[div][qtr];
                                     }
    }
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The total sale for the company are: $";
    cout<<tsale<<endl;
    return 0;
            
    
}


