/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Purpose:  Homework problems in a menue loop
 * problem 01 - loop the sum
 * problem 02 - sea level rising
 * problem 03 - Burning calories 
 * problem 04 - Club Pricing
 * problem 05 - Distance Traveled
 * problem 06 - pennies for pay
 * problem 07 - Math Tutor
 * problem 08 - Random Number Guessing Game
 * problem 09 - Budget Analysis
 * problem 10 - Random Number Guessing Game Enhancement
 * Mar 28, 2016
*/
//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>  //for rand and srand
#include <ctime>    //for hte time function
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int choice;
    //do loop
    do{
    //Display the selection
    cout<<"Type 1 for Gaddis_8thED_Chap5_Prob01"<<endl;
    cout<<"Type 2 for Gaddis_8thED_Chap5_Prob03"<<endl;
    cout<<"Type 3 for Gaddis_8thED_Chap5_Prob04"<<endl;
    cout<<"Type 4 for Gaddis_8thED_Chap5_Prob05"<<endl;
    cout<<"Type 5 for Gaddis_8thED_Chap5_Prob06"<<endl;
    cout<<"Type 6 for Gaddis_8thED_Chap5_Prob07"<<endl;
    cout<<"Type 7 for Gaddis_8thED_Chap5_Prob08"<<endl;
    cout<<"Type 8 for Gaddis_8thED_Chap5_Prob19"<<endl;
    cout<<"Type 9 for Gaddis_8thED_Chap5_Prob20"<<endl;
    cout<<"Type 10 for Gaddis_8thED_Chap5_Prob21"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    
    //read choice
    cin>>choice;

    //Solve a problem that has been chosen.
    switch(choice){
            case 1:{//problem 01
                    //Declare variables
                    int num;
                    int ans;
                    int a;
                    cout<<"Enter a positive integer"<<endl;
                    cin>>a;
                    num=a;
                    //set ans to 0 to have a given value
                    ans=0;
                    //loop to get calculations
                    do{

                        ans=ans+num;
                        num--;

                    }while(num>0);
                    cout<<"The sum of all integers from "<<a<<" to 1 is ="<<ans<<endl;
                break;
            }
            case 2:{//problem 03
                //Declare variables
                float inc=1.5;
                float now=0;
                int year=0;
                cout<<"This chart will show what will happen if the "
                        "water level will rise at "<<inc<<" mil per year"<<endl;
                cout<<"Year    Inc"<<endl;

                //loop to get calculations
                while(year<=25){
                    now=now+inc;
                    cout<<setprecision(1)<<fixed;
                    cout<<setw(2)<<year<<setw(9)<<now<<endl;
                    year++;


                }
                cout<<"The sea will rise "<<now<<" mill within the 25 year"<<endl;
                
                break;
            }
            case 3:{//problem 04
                //Declare variables
                float burn=3.6;
                float cal=0;
                int min=0;
                cout<<"On our Treadmill you will burn (shown on the graph as calories"
                        "per min)."<<endl;
                cout<<"Calories    Min"<<endl;

                //loop to get calculations
                while(min<=30){
                    cal=burn*min;
                    cout<<setprecision(1)<<fixed;
                    cout<<setw(5)<<cal<<setw(10)<<min<<endl;
                    min=min+5;
                    }
                break;
            }
            case 4:{//problem 05
                //Declare variables
                float cha=2500;
                float per=0.04;
                int year=0;
                cout<<"Here are our Club Charges within the next 6 years."<<endl;
                cout<<"Year       Price"<<endl;

                //loop to get calculations
                while(year<6){
                    cha=cha*per+cha;
                    year++;
                    cout<<setprecision(2)<<fixed;
                    cout<<setw(2)<<year<<setw(8)<<"$"<<cha<<endl;
                }
                
                break;
            }
            case 5:{//problem 06
                float D;
                float mph;
                int hrs=0;
                int a=0;
                cout<<"What is the speed of the vehicle in mph?";
                cin>>mph;
                cout<<"How many hours has it traveled?";
                cin>>hrs;
                if(hrs==0 || mph==0){
                    cout<<"You haven't traveled any distance"<<endl;
                }
                else{
                cout<<"Hours     Distance"<<endl;

                //loop to get calculations
                while(a<hrs){
                    a++;
                    D=mph*a;
                    cout<<setprecision(2)<<fixed;
                    cout<<setw(2)<<a<<setw(15)<<D<<endl;
                }
                if(hrs==0){
                    cout<<"You haven't traveled any distance"<<endl;
                }
                }
                break;
                
            }
            case 6:{//problem 07
                //Declare variables
                float pen=0.01;
                float days=1;
                float amt;
                int a=0;
                //getting the amount of days they want.
                cout<<"Enter the amount of days to double the pennies"<<endl;
                cin>>a;

                //labeling the chart
                cout<<" Days    Amount"<<endl;

                //loop to get calculations
                while(days<=a){
                    cout<<setprecision(2)<<fixed;
                    cout<<setw(6)<<days<<setw(5)<<"$"<<pen<<endl;
                    pen=pen*2;
                    days++;
                }
                            break;
            }
            case 7:{//problem 08
                //Declare variables
                float a;
                float b;
                float tot;
                float ans;
                int choice;
                float tal;
                //constants
                const int min=0;
                const int max=200;

                //get the system time.
                unsigned seed = time(0);

                //seed the random number generator.
                srand(seed);
                do{
                //display message
                cout<<"Press 1 for Addition."<<endl;
                cout<<"Press 2 for Subtraction."<<endl;
                cout<<"Press 3 for Division."<<endl;
                cout<<"Press 4 for Multiplication."<<endl;
                cout<<"Press 5 to Exit."<<endl;
                cin>>choice;
                //loop to get calculations

                    switch(choice){
                        case 1:{
                            //get random numbers to solve
                            a = (rand()%(max-min+1))+min;
                            b = (rand()%(max-min+1))+min;
                            cout<<"What is the sum?"<<endl;
                            cout<<a<<endl;
                            cout<<b<<endl;

                            //calculation
                            tot = a+b;

                            cout<<"Enter your answer here"<<endl;
                            cin>>ans;

                            if(tot==ans){

                             cout<<"Correct, The answer is "<<tot
                                        <<" and you answered "<<ans<<endl; 
                            }
                            else {
                                cout<<"sorry the answer is "<<tot<<endl;
                            }

                            break;
                        }
                        case 2:{
                            //get random numbers to solve
                            a = (rand()%(max-min+1))+min;
                            b = (rand()%(max-min+1))+min;
                            cout<<"What is the Difference"<<endl;
                            cout<<a<<endl;
                            cout<<b<<endl;

                            //calculation
                            tot = a-b;

                            cout<<"Enter your answer here"<<endl;
                            cin>>ans;
                            if(tot==ans){

                            cout<<"Correct, The answer is "<<tot
                                        <<" and you answered "<<ans<<endl; 
                            }
                            else {
                                cout<<"sorry the answer is "<<tot<<endl;
                            }
                        
     break;
            }
            case 3:{
                //get random numbers to solve
                a = (rand()%(max-min+1))+min;
                b = (rand()%(max-min+1))+min;
                cout<<"What is the Division?"<<endl;
                cout<<a<<endl;
                cout<<b<<endl;

                //calculation
                tot = a/b;

                cout<<"Enter your answer here (up to 3 decimal places)"<<endl;
                cin>>ans;
                
                tal=abs(tot-ans);// make tolerance for division
                
                if(tal<0.009){

                 cout<<"Correct, The answer is "<<tot
                            <<" and you answered "<<ans<<endl; 
                }
                else {
                    cout<<"sorry the answer is "<<tot<<endl;
                }
            
     break;
         }
            case 4:{
                    //get random numbers to solve
                    a = (rand()%(max-min+1))+min;
                    b = (rand()%(max-min+1))+min;
                    cout<<"What is the Product?"<<endl;
                    cout<<a<<endl;
                    cout<<b<<endl;

                    //calculation
                    tot = a*b;

                    cout<<"Enter your answer here"<<endl;
                    cin>>ans;

                   
                    if(tot==ans){

                 cout<<"Correct, The answer is "<<tot
                            <<" and you answered "<<ans<<endl; 
                }
                else {
                    cout<<"sorry the answer is "<<tot<<endl;
                } 
                
                    
         break;
            }
         
            case 5:{
                cout<<"EXIT?"<<endl;
                         break;
            }
            
    }
        if (choice>5 || choice <1) {
                cout<<"ERROR"<<endl;
            }
    }while(choice!=5);
                
                break;
            }
        case 8:{//problem 19
                //Declare variables
                int mon=0;//monthly budget
                int bud;
                int time=1;//time for the year
                int pay;//expenses


                //information
                cout<<"How much will you put in your budget per month"<<endl;
                cin>>bud;

                //loop to get calculations
                do{
                    cout<<"what are your expenses for the month"<<endl;
                    cin>>pay;
                    mon=mon-pay+bud;
                    //display
                cout<<"Month    Budget"<<endl;
                    cout<<setprecision (2)<<fixed;
                    cout<<setw(2)<<time<<setw(8)<<"$"<<mon<<endl;
                    time++;


                }while (time<=12);

                //Display their yearly budget
                cout<<"At the end of the year, "<<endl;
                if (mon<0){
                    cout<<"you went over by $"<<mon<<endl;       
                }
                else if (mon>0){
                    cout<<"you have saved $"<<mon<<endl;
                }
                else{
                    cout<<"you broke even"<<endl;
                }
                break;
            }
            case 9:{//problem 20
                //Declare variables
                int gues;
                float a;
                //constants
                const int min=0;
                const int max=20;

                //get the system time.
                unsigned seed = time(0);

                //seed the random number generator.
                srand(seed);
                a = (rand()%21)+min;
                cout<<"What number am I thinking of between 0 and 20?"<<endl;

                //loop to get calculations
                do{
                    cin>>gues;
                    if (gues>a){
                        cout<<"your guess was to high."<<endl;
                    }
                    else if (gues<a){
                        cout<<"your guess was to low."<<endl;
                    }
                }while (gues!=a);
                cout<<"Congrats, you found out the number i was thinking of."<<endl;
                break;
            }
            
            case 10:{//Problem 21
                 //Declare variables
                int gues;
                float a;
                int count;
                //constants
                const int min=0;
                const int max=20;

                //get the system time.
                unsigned seed = time(0);

                //seed the random number generator.
                srand(seed);
                a = (rand()%21)+min;
                cout<<"What number am I thinking of between 0 and 20?"<<endl;

                //loop to get calculations
                do{
                    cin>>gues;
                    count++;
                    if (gues>a){
                        cout<<"your guess was to high."<<endl;
                    }
                    else if (gues<a){
                        cout<<"your guess was to low."<<endl;
                    }
                }while (gues!=a);
                cout<<"Congrats, you found out the number I was thinking of. It took you "<<count<<" times."<<endl;
                break;
            }
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
}while (choice <= 10 && choice >=1);
    return 0;
}