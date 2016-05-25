/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * working with the power point
 * Created on May 25, 2016, 8:04 AM
 */

#include <iostream>

using namespace std;

//Global Variables

//user Variables

//Function 
int main(int argc, char** argv) {
    int num=-99;
    cout<<&num<<endl; //prints address
                      // hexadecimal
                      //this cant be changed, why do you need to know? no need.
    //pointers point to the data, to know where the memory is located, because
    //it cant be changed you the computer knows where it is.
    
    //Pointers are passed by referance (being passed through functions while keeping its memory). 
    
    //ex how its used "*" indicates pointer
    int *intptr;  //can be writen int * intptr; or int* intptr; but people only do it the original way.
    intptr = &num; 
    cout<<intptr<<endl; // *intptr=*&num =>num (the original number)
                        //* and & are both pointers so they cancel each other out.
    
    //pointers are an aliace call one thing by num for 90 or its pointer &num is still
    // the value 90 but just the address.
    
    
    int vals[]={4,7,11};
    cout<<vals<<endl;
    cout<<vals[0]<<endl;
    cout<<*vals<<endl;
    
    int *valptr=vals;       //use the pointer
    cout<<valptr[1]<<endl;  //number
    cout<<valptr<<endl<<endl;     //address
    
    valptr=vals;
    cout<<"Using pointers to show the location address then the next \nis the"
            "actual number at that address"<<endl;
    cout<<valptr+1<<endl;
    cout<<*(valptr+1)<<endl;
    cout<<valptr+2<<endl;
    cout<<*(valptr+2)<<endl<<endl;
    
    cout<<"The numbers are still here."<<endl;
    for(int i=0;i<3;i++){
    cout<<vals[i]<<endl;
    }
    
    
    return 0;
}

