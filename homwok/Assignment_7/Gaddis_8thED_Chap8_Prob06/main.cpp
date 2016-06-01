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
    string in[SIZE]={"Collins, Boll", "Smith ,Brat","Allen, Jim",
                "Graffin, Jim", "Stamey, Marty", "Rose, Geri",
                "Taylor, Terri", "Jason, Jill",
                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
                "James, Jean", "Weaver, Jim" "Pore, Bob",
                "Rutherford, Greg", "Javes, Renee",
                "Harrison, Rose", "Setzer, Cathy",
                "Pike, Gordon", "Holland, Beth"};
    

    for(int i=0; i<SIZE-1;i++){
        for(int pos=i;pos<SIZE;pos++){
            if(in[i]>in[pos]){
                  string tmp = in[i];
                  in[i] = in[pos];
                  in[pos] = tmp;
            }
        }
    }
    for(int i=0; i<SIZE;i++){
        cout<<in[i]<<endl;
        
    }
    return 0;
}