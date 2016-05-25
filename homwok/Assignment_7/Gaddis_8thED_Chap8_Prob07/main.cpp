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
    //string find
    string user;
    
    
    //alphabaities the names
    for(int i=0; i<SIZE-1;i++){
        for(int pos=i;pos<SIZE;pos++){
            if(in[i]>in[pos]){
//                in[pos]=in[pos]^in[i];
//                in[i]=in[pos]^in[i];
//                in[pos]=in[pos]^in[i];
                  string tmp = in[i];
                  in[i] = in[pos];
                  in[pos] = tmp;
            }
        }
    }
    
    //show it was alphabaties
    for(int i=0; i<SIZE;i++){
        cout<<in[i]<<endl;
        
    }
    
    //search name
    cout<<"Enter name : ";
    getline(cin,user);
    cout<<endl;
    
    //binary sting search for name
    int beg=0,end=SIZE-1,middle=0,ans=0;
    while(end>=beg){
        middle=(beg+end)/2;
        if(in[middle]==user){
            cout<<"Found Valid Name"<<endl;
            ans=1;
            break;
        }
        else if(in[middle]>user)end=middle-1;
        else beg=middle+1;
        
    }
    if(ans==0){
        cout<<"Invalid Name, make sure to capitalize and use punctuation";
    }
    
    
    return 0;
}