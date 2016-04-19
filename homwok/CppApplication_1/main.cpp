/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bassam
 * Going through the concept problems in chapter 6 
 * Pg. 306 Ch 6.2 program 6-4
 * Created on April 19, 2016, 11:55 AM
 */

#include <iostream>

using namespace std;

//definition of function deeper
void deeper()
    {
        cout<<"I am now inside the function deeper.\n";
    }

//definition of function deep
    void deep()
    {
        cout<<"I am now inside the function deep.\n";
        deeper();
        cout<<"now i am back in deep.\n";
    }


int main(int argc, char** argv) {
    cout<<"I am starting in function main.\n";
    deep();     //call function dee
    cout<<"Back in function main again.\n";    
    return 0;
}

