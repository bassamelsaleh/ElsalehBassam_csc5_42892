/* 
 * File:   main.cpp
 * Author: Bassam
 * Home Work Problems
 * Created on May 9, 2016, 12:54 PM
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int SIZE=5;
    const int MON=3;
    int monk[MON]={1,2,3};
    int rain[MON]={};
    char day[SIZE]={};
    int min=0;
    int max=0;
    
    ofstream in;
    in.open("RainOrShine.txt");
    
    
    for (int count=0;count<MON;count++){
    int countr=0;
        int countc=0;
        int counts=0;
        cout<<"How much did the monkey #"<<monk[count]<<" eat "
                "per day in the last five days"<<endl;
        in<<"Month #"<<monk[count]<<endl;
        for(int read=0;read<SIZE;read++){
        cin>>day[read];
        in<<day[read]<<"\n";
        if(day[read]=='s'){//cant get the numbers to read the amount of days were r s and c
         counts++;
        }
        else if(day[read]=='c')
        {
            countc++;
        }
        else if (day[read]=='r'){
            countr++;
            rain[count]=countr;
        }
        cout<<endl;
        
        }
        
        in<<"It rained ";
        in<<countr;
        in<<" times was cloudy ";
        in<<countc;
        in<<" times and was sunny ";
        in<<counts;
    }
    
    
    /*
    for(int count=0; count<MON;count++){
        if(rain[1]>rain[2] && rain[1]>rain[3])
            in<<"June had the most rain"<<endl;
        
        else if(rain[2]>rain[1] && rain[2]>rain[3])
            in<<"July had the most rain"<<endl;
        
        else if(rain[3]>rain[2] && rain[1]<rain[3])
            in<<"August had the most rain"<<endl;
            
    }*/
    
    in.close();
    return 0;
}
