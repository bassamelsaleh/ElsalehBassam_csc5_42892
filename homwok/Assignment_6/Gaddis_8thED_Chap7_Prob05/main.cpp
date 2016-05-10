/* 
 * File:   main.cpp
 * Author: Bassam
 * Home Work Problems
 * Created on May 9, 2016, 12:54 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int SIZE=5;
    const int MON=3;
    int monk[MON]={1,2,3};
    int day[SIZE]={1,2,3,4,5};
    float tot;
    int min=0;
    int max=0;
    
    for (int count=0;count<MON;count++){
        cout<<"How much did the monkey #"<<monk[count]<<" eat "
                "per day in the last five days"<<endl;
        for(int read=0;read<SIZE;read++){
        cin>>day[read];
        tot+=day[read];
        }
    }
    
    min=day[0];
    for (int count=0;count<SIZE-1;count++){
       if(day[count]>day[count+1] && day[count+1]<min){
        min=day[count+1];
        }
        else;
        }
    max=day[0];
    for (int count=0;count<SIZE-1;count++){
       if(day[count]<day[count+1] && day[count+1]>max){
        max=day[count+1];
        }
        else;
        
    }
    
    
    cout<<"The average eatean by all is "<<tot/15<<endl;
    cout<<"The Most eaten by one monkey was "<<max<<endl;
    cout<<"The Least eaten by one monkey was "<<min<<endl;
    return 0;
}
