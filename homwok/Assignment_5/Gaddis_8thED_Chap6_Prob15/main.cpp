/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Gaddis ch.6 prob. 08
 * Created on April 21, 2016, 10:53 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//Global variables

//User variables

//Functions
float in();
float out();

int main(int argc, char** argv) {
    int user;
    float ans;
    
    cout<<"Are you an \n 1)in-patient\n 2)out-patient"<<endl;
    cin>>user;
    
    if(user==1){
        ans=in();
        cout<<"Your total is: "<<ans;
    }
    else{
        ans=out();
        cout<<"Your total is: "<<ans;
    }
    
    
    
            
    return 0;
}


float in(){
    int days=0;
    float rate=0;
    int charge=0;
    int serv=0;
    float tot=0;
    while (days<=0){
    cout<<"How long did you stay for: "<<endl;
    cin>>days;
    if (days<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    while (rate<=0){
    cout<<"What is the rate: "<<endl;
    cin>>rate;
    if (rate<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    while(charge<=0){
    cout<<"Whats the Medication charges: "<<endl;
    cin>>charge;
    if (charge<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    while (serv<=0){
    cout<<"What were the hospital services charges: "<<endl;
    cin>>serv;
    if (serv<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    tot= days*rate+serv+charge;
    return tot;
}

float out(){
    int serv=0;
    int charge=0;
    float tot;
    while (serv<=0){
    cout<<"What were the hospital services charges: "<<endl;
    cin>>serv;
    if (serv<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    
    while(charge<=0){
    cout<<"Whats the Medication charges: "<<endl;
    cin>>charge;
    if (charge<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    tot=serv*charge;
    return tot;
}

