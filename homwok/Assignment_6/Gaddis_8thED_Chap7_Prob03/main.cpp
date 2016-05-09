/* 
 * File:   main.cpp
 * Author: Bassam
 * Home Work Problems
 * Created on May 9, 2016, 12:54 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int TYPE=5;//the type of salsa
    string name[TYPE];
    int sale[TYPE];
    int min=0;
    int max=0;
    string larg;
    string small;
    
    
        cout<<"What are the five types of salsa?"<<endl;
        
    for(int count=0; count<TYPE; count++){
        getline(cin, name[count]);
    }
        for(int count=0; count<TYPE; count++)
        {    
        cout<<"How many jars were sold from "<<name[count]<<endl;
        cin>>sale[count];
        }
        cout<<setw(5)<<"Jar"<<setw(10)<<"Sale"<<endl;
        for(int count=0; count<TYPE; count++){
            cout<<setw(5)<<name[count]<<setw(10)<<sale[count]<<endl;
        }
        
        cout<<endl;
    min=sale[0];
    for (int count=0;count<TYPE-1;count++){
       if(sale[count]>sale[count+1] && sale[count+1]<min){
        small=name[count+1];
        }
        else;
        }
    
    max=sale[0];
    for (int count=0;count<TYPE-1;count++){
       if(sale[count]<sale[count+1] && sale[count+1]>max){
        larg=name[count+1];
        }
        else;
        
    }
    cout<<"The jar that sold the most was "<<larg<<endl;
    cout<<"The jar that sold the lest was "<<small<<endl;
    
    return 0;
}