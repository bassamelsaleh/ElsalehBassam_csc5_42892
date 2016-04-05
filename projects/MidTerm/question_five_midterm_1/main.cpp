/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 *
 * Created on April 4, 2016, 10:14 AM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
   //set variables
    float hrs, rate, tot;
    cout<<"How much do you make?"<<endl;
    cin>>rate;
    cout<<"How many hours do you work?"<<endl;
    cin>>hrs;
    
    if(hrs<=20 && hrs>0){
        tot=hrs*rate;
        cout<<"Your pay is $"<<tot<<endl;
    }
    else if (hrs>20 && hrs<=40){
        tot=1.5f*rate*(hrs-20)+rate*(20);
        cout<<"Your pay is $"<<tot<<endl;
    }
    else if (hrs>40){
        tot=2*rate*(hrs-40)+1.5f*rate*(20)+rate*(20);
        cout<<"Your pay is $"<<tot<<endl;
    }
   
    
    
}