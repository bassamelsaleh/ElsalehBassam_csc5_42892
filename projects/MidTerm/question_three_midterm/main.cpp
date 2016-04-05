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
    string payee,holder,date;
    int add, city, state, amount;
    
    // declare 
    cout<<"Enter the Date."<<endl;
    getline(cin,date);
    cout<<"Enter the Payee's name."<<endl;
    getline(cin,payee);
    cout<<"Enter the Amount of the check form $1 to $999."<<endl;
    cin>>amount;
    cout<<"Enter the card holders name."<<endl;
    cin.ignore();
    getline(cin,holder);
    
    cout<<endl;
    cout<<holder<<endl;
    cout<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<endl;
    cout<<"CITY, STATE ZIP"<<endl;
    cout<<"Date:   "<<date<<endl;
    cout<<endl;
    cout<<"Pay to the order of : "<<payee<<setw(20)<<"$"<<amount<<endl;
    cout<<""<<endl;
    cout<<endl;
    cout<<"Eight Hundred Eleven and no/100s Dollars"<<endl;
    cout<<endl;
    cout<<"BANK OF CSC5"<<endl;
    cout<<endl;
    cout<<"FOR: GOTTA PAY THE RENT"<<setw(30)<<holder;
    
    /*
    string in;
    for (count = 0; count <in.size() ; count++){
        cout<<in[in.size() - 1 - count]<<" ";
        switch(in[in.size() - 1 - count]){
            case'0':{
                cout<<endl;
                break;
            }
            case'1':{
                cout<<"*"<<endl;
                break;
            }
            case'2':{
                cout<<"**"<<endl;
                break;
            }
            case'3':{
                cout<<"***"<<endl;
                break;
            }
            case'4':{
                cout<<"****"<<endl;
                break;
            }
            case'5':{
                cout<<"*****"<<endl;
                break;
            }
            case'6':{
                cout<<"******"<<endl;
                break;
            }
            case'7':{
                cout<<"*******"<<endl;
                break;
            }
            case'8':{
                cout<<"********"<<endl;
                break;
            }
            case'9':{
                cout<<"*********"<<endl;
                break;
            }
            
            default:{
                    cout<<"?"<<endl;
            }
        }
    }
    
    //
    count=0;
*/
}