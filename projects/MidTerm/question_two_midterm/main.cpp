/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 *
 * Created on April 4, 2016, 10:14 AM
 */

#include <iostream>
#include <string>

using namespace std;


int main(int argc, char** argv) {
   //set variables
    
    string in;
    int count;
    
    // declare 
    cout<<" Enter a four digit number"<<endl;
    cin>>in;
    
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
}