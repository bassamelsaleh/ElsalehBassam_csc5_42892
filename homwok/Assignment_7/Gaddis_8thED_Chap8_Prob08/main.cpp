/* 
 * File:   main.cpp
 * Author: Bassam
 * Home Work Problems
 * Created on May 9, 2016, 12:54 PM
 */

#include <iostream>
#include <string>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int SIZE=20;
    int in[SIZE];
    int user;
    
    //fill array
    for(int i=0;i<SIZE;i++){
        in[i]=i+1;
    }
    
    //keep numbers in order for binary (not really needed in this example)
    for(int i=0; i<SIZE-1;i++){
        for(int pos=i;pos<SIZE;pos++){
            if(in[i]>in[pos]){
                in[pos]=in[pos]^in[i];
                in[i]=in[pos]^in[i];
                in[pos]=in[pos]^in[i];
            }
        }
    }
    
    //show numbers were inputed correctly
    for(int i=0; i<SIZE;i++){
        cout<<in[i]<<endl;
        
    }
    
    //search name
    cout<<"Enter a Number 1-20"<<endl;
    cin>>user;
    
    //Linier search
    int countL=1;
    for(int i=0; i<SIZE;i++){
        
        if(user==in[i]){
            break;
        }
        countL++;       
        
    }
    
    //binary sting search for name
    int beg=0,end=SIZE-1,middle=0,ans=0, countb=0;
    while(end>=beg){
        middle=(beg+end)/2;
        if(in[middle]==user){
            ans=1;
            break;
        }
        else if(in[middle]>user)end=middle-1;
        else beg=middle+1;
        countb++;
        
    }
    if(ans==0){
        cout<<"Invalid Number";
    }
    cout<<"It took the Linear "<<countL<<" Times to find the number."<<endl;
    cout<<"It took the Binary "<<countb<<" Times to find the number."<<endl;
    
    
    return 0;
}