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
    char pack;
    float  hrs,pay,choice, priA, priB, priC;
    cout<<"which package would you like?"<<endl
            <<"a)  $16.85 per month, 5 hours access.  Additional hours"
	    <<endl<<"    are $0.75 up to 20 hours then $1 for all additional"
	    <<endl<<"    hours."
            <<endl<<"b)  $23.85 per month, 15 hours access.  Additional hours"
            <<endl<<"    are $0.55 up to 25 hours then $0.65 for each"
	    <<endl<<"    hour above this limit."
	    <<endl<<"c)  $29.55 per month unlimited access"<<endl;
    cin>>pack;
    cout<<"how many hours were used"<<endl;
    cin>>hrs;
    
    priA = 16.85f;
    priB = 23.85f;
    priC = 29.55f;
    
    if (hrs > 25){
        cout<<setprecision(2)<<fixed;
        priA += (hrs-20)*1 + 15*0.75f;
        priB += (hrs-25)*0.65f + 10*0.55f;
    }
    else if(hrs > 20){
        cout<<setprecision(2)<<fixed;
        priA += (hrs-20)*1 + 15*0.75f;
        priB += (hrs-15)*0.55f;
    }
    else if(hrs > 15){
        cout<<setprecision(2)<<fixed;
        priA += (hrs-5)*.75f;
        priB += (hrs-15)*.55f;
    }
    else if(hrs > 5){
        cout<<setprecision(2)<<fixed;
        priA += (hrs-5)*.75f;
    }
    cout<<priA<<endl;
    cout<<priB<<endl;
    cout<<priC<<endl;
    
    
    switch(pack){
        case'a':{
            cout<<"Current price is $"<<priA<<endl;
            if(hrs>5 && hrs<=15){
                cout<<"You should upgrade Package B"<<endl;
            }
            else if(hrs>15){
                cout<<"You should upgrade Package C"<<endl;
            }
            else{
                cout<<""<<endl;
            }
            break;
        }
        case'b':{
            cout<<"Current price is $"<<priB<<endl;
            if(hrs>25){
            cout<<"You should upgrade Package C"<<endl;    
            }
            
            break;
        }
        case'c':{
            setprecision(2);
            cout<<"Current price is $"<<priC<<endl;
            break;
        }
    }
}