/* 
 * File:   main.cpp
 * Author: Bassam
 * Home Work Problems
 * Created on May 9, 2016, 12:54 PM
 */

#include <iostream>
#include <cstring>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int SIZE=12;
    int in[SIZE]={};
    int min=0;
    int max=0;
    int tot=0;
    cout<<"Input the amount of rain per month in the"
            "last year "<<endl;
    for(int count=0;count<SIZE;count++){
        cin>>in[count];
        if (in<0){
            cout<<"input a valid number"<<endl;
        cin>>in[count];
        }
    }
    
        cout<<endl;
    min=in[0];
    for (int count=0;count<SIZE-1;count++){
       if(in[count]>in[count+1] && in[count+1]<min){
        min=in[count+1];
        }
        else;
        }
    max=in[0];
    for (int count=0;count<SIZE-1;count++){
       if(in[count]<in[count+1] && in[count+1]>max){
        max=in[count+1];
        }
        else;
    }
    for (int count=0; count<SIZE;count++){
        tot+=in[count];
    }
    tot=tot/12;
    
  
    
    cout<<"The Lowest amount of rain was in the "<<min<<" month"<<endl;
    cout<<"The highest amount of rain was in the "<<max<<" month"<<endl;
    cout<<"The average amount of rain was "<<tot<<endl;
    return 0;
}