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
void first(char[],char[][30]);
int main(int argc, char** argv) {
//    mnt[3][30]
    const int SIZE=30;
    const int MON=3;
    char rain[MON][SIZE]={{}};
    int one[SIZE]={};
    
    ofstream in;
    in.open("RainOrShine.txt");
    
    char fn[]="days.dat";
    
    /////////////    /////////////    /////////////    /////////////
    first(fn,rain);
//      int i=0;
    for (int count=0; count<MON;count++){
        int _rain=0;
        int _sunny=0;
        int _cloudy=0;
        for(int sec=0; sec<SIZE; ++sec) 
        {
            in << rain[count][sec] << endl;
            if(rain[count][sec]=='r') _rain++;

            if(rain[count][sec]=='s') _sunny++;

            if(rain[count][sec]=='c') _cloudy++;
        }
        one[count]=_rain;
        cout<<one[count];
        in << "rained: " << _rain << endl;
        in << "cloudy: " << _cloudy << endl;
        in << "sunny: " << _sunny << endl;
    }
    /////////////    /////////////    /////////////    /////////////
    
    if (one[0]>one[1] &&one[0]>one[2]){
        in<<"June had the most rain";
    }
    
    else if (one[1]>one[0] &&one[1]>one[2]){
        in<<"July had the most rain";
    }
    
    else if (one[2] > one[1] &&one[2]>one[0]){
        in<<"August had the most rain";
    }
    
    
    in.close();
    return 0;
}

void first(char fn[], char dat[][30]){
    ifstream days;
    days.open("days.dat");
    
    
//    int n=0;
//    while(days>>dat[n]){
//        n++;
//    }
//        
    //Read from the file
    /////////////////////////////////////////////////////////////
    for(int row=0; row<3; ++row) {
        for(int col=0;col<30;++col){
            days >> dat[row][col];
        }
    }
     /////////////////////////////////////////////////////////////
    //Close the file
    days.close();
    
    //Return the size
//    return n;
    
}