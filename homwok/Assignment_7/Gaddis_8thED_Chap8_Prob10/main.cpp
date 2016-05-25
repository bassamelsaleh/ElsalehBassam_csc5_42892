/* 
 * File:   main.cpp
 * Author: Bassam
 * Home Work Problems
 * Created on May 9, 2016, 12:54 PM
 */

#include <iostream>

using namespace std;

//user

//global variables

//functions


int main(int argc, char** argv) {
    const int SIZE=8;
    int in[SIZE]={0,5,1,3,4,65,45,2};
    int in2[SIZE]={0,5,1,3,4,65,45,2};
    int user;
    
    
    
    
    //show numbers were inputed correctly
    
    
    // bubble sort
    bool swap;
    int countB=0,temp;
    
    do{
        swap=false;
        for(int count=0;count<SIZE-1; count++){
            if(in[count]>in[count+1]){
                temp=in[count];
                in[count]=in[count+1];
                in[count+1]=temp;
                swap=true;
                countB++;
                cout<<"swap"<<endl;
                for(int i=0;i<SIZE;i++){
                    cout<<in[i]<<endl;
                }
                cout<<endl<<endl<<endl;
                
            }
        }
    }while(swap);
    cout<<"Finaly"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<in[i]<<endl;
    }
    
    //display results
    cout<<"It took the bubble "<<countB<<" times to sort "
            "the numbers"<<endl<<endl<<endl;
    
    //selection sort
    int start, minI,minV,countS=0;
    for (start=0;start<SIZE-1; start++){
        minI=start;
        minV=in2[start];
        for(int index=start+1;index<SIZE;index++){
            if(in2[index]<minV){
                minV=in2[index];
                minI=index;
                countS++;
                cout<<"swap"<<endl;
                for(int i=0;i<SIZE;i++){
                    cout<<in2[i]<<endl;
                }
                cout<<endl<<endl<<endl;
            }
        }
        in2[minI]=in2[start];
        in2[start]=minV;
    }
    cout<<"Finaly"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<in2[i]<<endl;
    }
    
    //display results
    cout<<"It took the selection "<<countS<<" times to sort the numbers"<<endl;
    return 0;
}