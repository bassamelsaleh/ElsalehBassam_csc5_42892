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
    int in[SIZE]={"Collins, Boll", "smith ,Brat","Allen, Jim",
    "Graffin, Jim", "Stamey, Marty", "Rose, Geri", "Taylor, Terri"};
    cout<<"Input the amount of rain per month in the"
            "last year "<<endl;

    
    //    for(int count=0;count<SIZE;count++){
//        cin>>in[count];
//        if (in<0){
//            cout<<"input a valid number"<<endl;
//        cin>>in[count];
//        }
//    }
    
    
    for(int i=0; i<SIZE-1;i++){
        for(int pos=i+1;pos<SIZE;pos++){
            if(in[i]>in[pos]){
                in[pos]=in[pos]^in[i];
                in[i]=in[pos]^in[i];
                in[pos]=in[pos]^in[i];
            }
        }
    }
    for(int i=0; i<SIZE;i++){
        cout<<in[i]<<endl;
        
    }
    return 0;
}