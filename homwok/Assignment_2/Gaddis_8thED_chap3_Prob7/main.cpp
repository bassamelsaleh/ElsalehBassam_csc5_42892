/* 
 * File:   main.cpp
 * Author: Bassam
 *
 * purpose: Theaters
 */

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

//user libraries

//Global Constants

int main(int argc, char** argv) {
    //declare variables 
    float per;//percent kept by the theater
    string movie;//name of the film
    float aT; //adult ticket
    float cT; //child's ticket
    float totA;//cost of adult tickets
    float totC;//cost of child tickets
    float gross;// the gross box office profit
    float net; //net box office profit
    float dis;// amount paid to distributer 
    
    //getting info
    cout<<"Press enter to begin"<<endl;
    cin.ignore();
    cout<<"What is the name of the film?"<<endl;
    getline(cin,movie);
    cout<<"How many adult tickets?"<<endl;
    cin>>aT;
    cout<<"How many child tickets?"<<endl;
    cin>>cT;
    
    //calculations
    per = 0.2;
    totA= 10*aT;
    totC = 6*cT;
    gross = totA+totC;
    net = gross*per;
    dis = gross-net;
    
    //output results
    cout<<"Movie Name:"<<setw(25)<<movie<<endl;
    cout<<"Adult Tickets:"<<setw(22)<<aT<<endl;
    cout<<"Child Tickers:"<<setw(22)<<cT<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Gross Box Office Profit:"<<setw(9)<<"$"<<gross<<endl;
    cout<<"Net Box Office Profit:"<<setw(12)<<"$"<<net<<endl;
    cout<<"Amount Paid to Distributer:"<<setw(7)<<"$"<<dis<<endl;
    
    
    

    return 0;
}

