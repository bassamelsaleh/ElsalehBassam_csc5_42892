/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Purpose:  To Illustrate code
 * by menu with do while and functions
 * Modified April 4th, 2016
*/
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void menu();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();
//Execution Begins Here
int main(int argc, char** argv) {
    //declare and outside loop 
    int choice;

    //General Menu Format
    do{
        menu();
            //Read the choice
            cin>>choice;
            //Solve a problem that has been chosen.
            switch(choice){
                    case 1:prob1();break;                    
                    case 2:prob2();break;
                    case 3:prob3();break;
                    case 4:prob1();break;                    
                    case 5:prob2();break;
                    case 6:prob1();break;                    
                    case 7:prob2();break;
                    case 8:prob1();break;                    
                    case 9:prob2();break;
                    case 10:prob2();break;
                    default:{
                            cout<<"Exit?"<<endl;
                    }
            };
    }while(choice<11);
    
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                           Problem 1                                        */
/*Inputs 
 *      None
 * outputs
 *      None
 */
void menu(){
//Display the selection
cout<<"Type 1 to solve problem 1"<<endl;
cout<<"Type 2 to solve problem 2"<<endl;
cout<<"Type 3 to solve problem 3"<<endl;
cout<<"Type 4 to solve problem 1"<<endl;
cout<<"Type 5 to solve problem 2"<<endl;
cout<<"Type 6 to solve problem 3"<<endl;
cout<<"Type 7 to solve problem 1"<<endl;
cout<<"Type 8 to solve problem 2"<<endl;
cout<<"Type 9 to solve problem 3"<<endl;
cout<<"Type 10 to solve problem 3"<<endl;
cout<<"Type anything else to quit with no solutions."<<endl;
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 1*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
void prob1(){
    
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 2*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
void prob2(){
   
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 3*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
void prob3(){
   
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 1*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
void prob4(){
    
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 2*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
void prob5(){
   
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 3*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
void prob6(){
   
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 1*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
void prob7(){
    
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 2*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
void prob8(){
   
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 3*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
void prob9(){
   
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 3*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
void prob10(){
   
}