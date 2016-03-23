/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Multiply the numbers between 1 and 10
 * Problem 3 -> Divide the numbers between 1 and 10
 * Modified on Mar 21st, 2016
 */

//System Libraries
#include <iostream>
#include <string>
#include <cstdlib>  //for rand and srand
#include <ctime>    //for hte time function
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout<<"Type 1 to get problem 1 in Gaddis 8thED chap 4"<<endl;
    cout<<"Type 2 to get problem 2 in Gaddis 8thED chap 4"<<endl;
    cout<<"Type 3 to get problem 3 in Gaddis 8thED chap 4"<<endl;
    cout<<"Type 4 to get problem 4 in Gaddis 8thED chap 4"<<endl;
    cout<<"Type 5 to get problem 5 in Gaddis 8thED chap 4"<<endl;
    cout<<"Type 6 to get problem 6 in Gaddis 8thED chap 4"<<endl;
    cout<<"Type 7 to get problem 7 in Gaddis 8thED chap 4"<<endl;
    cout<<"Type 8 to get problem 8 in Gaddis 8thED chap 4"<<endl;
    cout<<"Type 9 to get problem 9 in Gaddis 8thED chap 4"<<endl;
    cout<<"Type 10 to get problem 11 in Gaddis 8thED chap 4"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    int choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
            case 1:{
                //input values
                float a, b;
                cout<<"Input a number for A"<<endl;
                cin>>a;
                cout<<"Input number B"<<endl;
                cin>>b;
                //Establish values
                if (a > b)
                {
                    cout<<a<<" is greater than "<<b<<endl;
                }
                else if (b > a)
                {
                    cout<<b<<" is greater than "<<a<<endl;
                }
                else if (b == a)
                {
                    cout<<b<<" is equal to "<<a<<endl;
                }

                break;
            }
            case 2:{
                //declare variables
                    int num;
                    cout<<"Input the number (1-10) you want to convert to a numeral."<<endl;
                    cin>>num;
                    switch (num){
                        case 1:{
                            cout<<"I"<<endl;
                            break;
                        }
                        case 2:{
                            cout<<"II"<<endl;
                            break;
                        }
                        case 3:{
                            cout<<"III"<<endl;
                            break;
                        }
                        case 4:{
                            cout<<"IV"<<endl;
                            break;
                        }
                        case 5:{
                            cout<<"V"<<endl;
                            break;
                        }
                        case 6:{
                            cout<<"VI"<<endl;
                            break;
                        }
                        case 7:{
                            cout<<"VII"<<endl;
                            break;
                        }
                        case 8:{
                            cout<<"VIII"<<endl;
                            break;
                        }
                        case 9:{
                            cout<<"IX"<<endl;
                            break;
                        }
                        case 10:{
                            cout<<"X"<<endl;
                            break;
                        }
                        default:{
                     cout<<"Entered a number out of the range of values."<<endl;
                            }
                    }

                break;
            }
            case 3:{
                //declare values
                    int mon, day, year, md;

                    //set values
                    cout<<"Enter a Month in its Digit form"<<endl;
                    cin>>day;
                    cout<<"Enter a day"<<endl;
                    cin>>mon;
                    cout<<"Enter the last 2 digits of a year"<<endl;
                    cin>>year;

                    md = day*mon;

                    if (md == year){
                        cout<<"This date is magic."<<endl;
                    }
                    else{
                        cout<<"This date is not magic."<<endl;
                    }
                break;
            }
            case 4:{
                  //declare variables
                    float a1, a2, w1, l1, w2, l2;
                    // set variables
                    cout<<"What is the Length THEN Width of the first Rectangle"<<endl;
                    cin>>l1;
                    cin>>w1;
                    cout<<"What is the Length THEN Width of the second Rectangle"<<endl;
                    cin>>l2;
                    cin>>w2;

                    //calculations
                    a1 = l1*w1;
                    a2 = l2*w2;

                    //output results
                    if (a1 > a2){
                        cout<<"The area of the first Rectangle is "<<a1<<" the second area is "<<a2<<"."<<endl;
                        cout<<"The first Rectangle is Larger than the second Rectangle"<<endl;
                    }
                    if (a1 < a2){
                        cout<<"The area of the first Rectangle is "<<a1<<" the second area is "<<a2<<"."<<endl;
                        cout<<"The second Rectangle is Larger than the first Rectangle"<<endl;
                    }
                    if (a1 == a2){
                        cout<<"The area of the first Rectangle is "<<a1<<" the second area is "<<a2<<"."<<endl;
                        cout<<"The first Rectangle is equal to the second Rectangle"<<endl;
                    }


                break;
            }
            case 5:{
                //declare variables
                    float BMI, w, h;
                    //set variables
                    cout<<"what is your weight in pounds?"<<endl;
                    cin>>w;
                    cout<<"what is your hight in Inches"<<endl;
                    cin>>h;

                    //calculations
                    BMI = (w*703)/(h*h);   

                    //output results
                    cout<<"your BMI is "<<BMI<<endl;
                    if (BMI < 18.5){
                        cout<<" the individual is under weight"<<endl;
                    }
                    else if (BMI >25){
                        cout<<"the individual is over weight"<<endl;
                    }
                    else 
                        cout<<"the individual is in the optimal weight range"<<endl;
                break;
            }
            case 6:{
                //declare variables
                float mass, w;
                //declare variables
                cout<<"what is the mass of your object"<<endl;
                cin>>mass;

                //calculations
                w = mass*9.8f;

                //display results
                if (mass < 10){
                    cout<<"Mass is too light."<<endl;
                }
                else if (mass > 1000){
                    cout<<"Mass is to heavy."<<endl;
                }
                else 
                    cout<<"The weight of the object is "<<w<<endl;
                break;
            }
            case 7:{
                //declare variables
                float in,sec, min, hrs, days;
                //set variables
                cout<<"Enter any number in seconds"<<endl;
                cin>>in;
                //calculations
                min = in/60;
                hrs = in/3600;
                days = in/86400;

                //output results
                if (in < 60){
                    cout<<in<<" sec(s)."<<endl;
                }
                else if (in >= 60 && in < 3600){
                    cout<<min<<" min(s)."<<endl;
                }
                else if(in >= 3600 && in < 86400){
                    cout<<hrs<<" hour(s)."<<endl;

                }
                else if(in >= 86400){
                    cout<<days<<" day(s)."<<endl;
                }

                break;
            }
            case 8:{
                //declare variables
                string a;
                string b;
                
                cout<<"input first primary color."<<endl;
                cin>>a;
                
                cout<<"input second primary color"<<endl;
                cin>>b;
                
                if ((a == "red" && b == "blue")  || (b == "red" && a == "blue")){
                    cout<<"your color is Purple"<<endl;
                }
                else if ((a == "red" && b == "yellow")  || (b == "red" && a == "yellow")){
                    cout<<"your color is orange"<<endl;
                }
                else if ((a == "blue" && b == "yellow")  || (b == "blue" && a == "yellow")){
                    cout<<"your color is green"<<endl;
                }
                else
                    cout<<"you did not input a primary color"<<endl;

                break;
            }
            case 9:{//Character '3' in Hex
                //declare variables
    float pen, nick, dim, qu, p, n, d, q, tot;
    
    //input values
    cout<<"Enter the amount of change that will make a dollar"<<endl;
    cout<<"Enter the number of pennies."<<endl;
    cin>>pen;
    cout<<"Enter the number of nickels."<<endl;
    cin>>nick;
    cout<<"Enter the number of dimes."<<endl;
    cin>>dim;
    cout<<"Enter the number of quarters."<<endl;
    cin>>qu;
    
    //calculations
    p = pen*0.01f;
    n = nick*0.05f;
    d = dim*0.1f;
    q = qu*0.25f;
    tot = q+d+n+p;
    
    //output
    if (tot < 1){
        cout<<"You are under one dollar."<<endl;
    }
    else if (tot == 1){
        cout<<"Congrats you hit one dollar."<<endl;
    }
    else{
        cout<<"yYou are over one dollar."<<endl;
    }
                break;
            }
            case 10:{//Character '3' in Hex
                //constants
    const int min=0;
    const int max=1000;
    //declare variables
    int a;
    int b;
    int tot;
    int ans;
    
    //get the system time.
    unsigned seed = time(0);
    
    //seed the random number generator.
    srand(seed);
    
    //get random numbers to solve
    a = (rand()%(max-min+1))+min;
    b = (rand()%(max-min+1))+min;
    cout<<a<<endl;
    cout<<b<<endl;
    
    //calculation
    tot = a+b;
    
    cout<<"Enter your answer here"<<endl;
    cin>>ans;
    
    if (ans == tot){
        cout<<"congrats, you entered that correct answer. "<<tot<<endl; 
    }
    else{
        cout<<"sorry, the answer was "<<tot
                <<" and you answered "<<ans<<endl;
    }
                break;
            }
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}