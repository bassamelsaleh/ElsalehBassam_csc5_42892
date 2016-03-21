/* 
 * File:   main.cpp
 * Author: Bassam
 *
 * purpose word game
 */

#include <iostream>
#include <string>

using namespace std;

//user libraries

//Global Constants

int main(int argc, char** argv) {
    string name;
    string city;
    string coll;
    string proff;
    string anim;
    string pet;
    
    int age;
    cout<<"Enter you first name."<<endl;
    cin>>name;
    
    cout<<"Enter your age."<<endl;
    cin>>age;
    
    cout<<"Enter your city name."<<endl;
    cin>>city;
    
    cout<<"Enter a profession."<<endl;
    cin>>proff;
    
    cin.ignore();
    cout<<"Enter your college name."<<endl;
    getline(cin,coll);
    
    cout<<"Enter a type of animal."<<endl;
    cin>>anim;
    
    cout<<"Enter pets name."<<endl;
    cin>>pet;

    cout<<endl;
    
    cout<<"There once was a person named "<<name<<" who lived in "<<endl<<
            city<<". At the age of "<<age<<" "<<name<<" went to college at "<<coll<<". "<<endl
            <<endl<<name<<" graduated and went to work as a"<<endl<<proff<<". Then, "
            <<name<<" adopted a(n) "<<endl<<anim<<" named "<<pet<<". They both"
            "lived happily ever after!"<<endl;
    

    return 0;
}

