/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Purpose:  To Illustrate code
 * by menu with do while and functions
 * Modified April 4th, 2016
 * 
 * 
 * 
 * 
 * 
 * the menu isn't done yet when i put the other programs in i get an error
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
    }while(choice>0 && choice<11);
    
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
cout<<"Type 4 to solve problem 4"<<endl;
cout<<"Type 5 to solve problem 5"<<endl;
cout<<"Type 6 to solve problem 6"<<endl;
cout<<"Type 7 to solve problem 7"<<endl;
cout<<"Type 8 to solve problem 8"<<endl;
cout<<"Type 9 to solve problem 9"<<endl;
cout<<"Type 10 to solve problem 10"<<endl;
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
    void calculateRetail(float,float);

    float sale;
    float mark;
    
    cout<<"What is the wholesale cost?"<<endl;
    cin>>sale;
    while (sale<0){
        cout<<"You have inputed a negative number"<<endl;
        cin>>sale;
    
    }
    
    cout<<"What is the markup in decimal form?"<<endl;
    cin>>mark;
    while (mark<0){
        cout<<"You have inputed a negative number"<<endl;
        cin>>mark;
    }
    
    calculateRetail(sale,mark);





}
void calculateRetail(float sale, float mark){
    sale=sale*mark+sale;
    cout<<setprecision(2)<<fixed;
    cout<<"The cost is $"<<sale<<endl;
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
int sale();
void winner(int, int, int, int);

    int a;
    int b;
    int c;
    int d;
    int in;
    
    cout<<"Northeast Division ";
    in=sale();
    a=in;
    
    cout<<"Southwest Division ";
    in=sale();
    b=in;
    
    cout<<"Northwest Division ";
    in=sale();
    c=in;
    
    cout<<"Southwest Division ";
    in=sale();
    d=in;
    
    winner(a,b,c,d);
   
}


void winner(int a, int b, int c, int d){
    if(a>b, a>c, a>d){
        cout<<"Northeast Division wins"<<endl;
    }
    else if(b>a, b>c, b>d){
        cout<<"Southwest Division wins"<<endl;
    }
    else if(c>b, c>a, c>d){
        cout<<"Northwest Division wins"<<endl;
    }
    else if(d>b, d>a, d>c){
        cout<<"Southwest Division wins"<<endl;
    }
    else {
        cout<<"there was a tie";
    }
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
int salea(); 
void winner(int, int, int, int, int);

    int a;
    int b;
    int c;
    int d;
    int e;
    int in;
    
    cout<<"North ";
    in=salea();
    a=in;
    
    cout<<"South ";
    in=salea();
    b=in;
    
    cout<<"East ";
    in=salea();
    c=in;
    
    cout<<"West ";
    in=salea();
    d=in;
    
    cout<<"Central ";
    in=salea();
    e=in;
    
    winner(a,b,c,d,e);

    


   
}

int salea(){
    int in;
    do{
    cout<<"how many automobile accidents were reported?"<<endl;
    cin>>in;
    
    if(in<0){
        cout<<"Please enter a positive number"<<endl;
    }
    }while (in < 0);
    return in;
}

void winner (int a, int b, int c, int d, int e){
    if(a<b && a<c && a<d && a<e){
        cout<<"North had the lowest automobile accidents with a total of "<<a<<endl;
    }
    else if(b<a && b<c && b<d && b<e){
        cout<<"South had the lowest automobile accidents with a total of "<<b<<endl;
    }
    else if(c<b && c<a && c<d && c<e){
        cout<<"East had the lowest automobile accidents with a total of "<<c<<endl;
    }
    else if(d<b && d<a && d<c && d<e){
        cout<<"West had the lowest automobile accidents with a total of "<<d<<endl;
    }
    else if (e<a && e<b && e<c && e<d){
        cout<<"Central had the lowest automobile accidents with a total of "<<e<<endl;
    }
    else {
        cout<<"There was a tie";
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 1*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
int drop();
void prob4(){
    
    


    int d;
    
    for(int count=0;count<10;++count){
    d=drop();
    cout<<"The ball is now at a distance of "<<d<<" after "<<count<<" sec."<<endl;
    }



}
int drop(){
    int in=1;
    float g=9.8;
    float d=0;
    
    d=0.5f*g*in*in;
    
    return d;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 2*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
int dropa();
void prob5(){
   
 

    int k;
    
    k=drop();
    cout<<"The Kinetic energy of the object is "<<k<<endl;

   
}

int dropa(){
    int v=0;
    float m=0;
    float k=0;
    cout<<"What is the velocity in meters per second?"<<endl;
    cin>>v;
    
    cout<<"What is the mass in kilograms?"<<endl;
    cin>>m;
    
    k=0.5f*m*v*v;
    
    return k;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 3*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
 float drop(int);
void prob6(){
  
    


    float c;
    int a=0;
    for (int count=0;count<=20;++count){
        drop(a);
    c=drop(a);
    
    cout<<"The temperature in Fahrenheit of "<<count<<" is approximately  to "
            ""<<c<<" In Celsius."<<endl;

a++;
}
    



}
float drop(int a){
    float d;
    
    d=0.55555f*(a-32);
    
        
    
    return d;
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
    void flip(int);


    int coin;
    
    cout<<"How many time do you want to flip the coin?"<<endl;
    cin>>coin;
    flip(coin);

}
    

void flip(int coin){
    int land;
    const int min=1;
    const int max=2;
    int counth=0;
    int countt=0;
            
    for(int count=0 ; count<coin ; count++){
    land=(rand()%(max-min+1))+min;
    unsigned seed = time(0);
    
    if (land==1){
        cout<<"Heads"<<endl;
    }
    else {
        cout<<"Tails"<<endl;
}
    }
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
   float in();
float out();

    int user;
    float ans;
    
    cout<<"Are you an \n 1)in-patient\n 2)out-patient"<<endl;
    cin>>user;
    
    if(user==1){
        ans=in();
        cout<<"Your total is: "<<ans;
    }
    else{
        ans=out();
        cout<<"Your total is: "<<ans;
    }
    


}
float in(){
    int days=0;
    float rate=0;
    int charge=0;
    int serv=0;
    float tot=0;
    while (days<=0){
    cout<<"How long did you stay for: "<<endl;
    cin>>days;
    if (days<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    while (rate<=0){
    cout<<"What is the rate: "<<endl;
    cin>>rate;
    if (rate<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    while(charge<=0){
    cout<<"Whats the Medication charges: "<<endl;
    cin>>charge;
    if (charge<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    while (serv<=0){
    cout<<"What were the hospital services charges: "<<endl;
    cin>>serv;
    if (serv<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    tot= days*rate+serv+charge;
    return tot;
}

float out(){
    int serv=0;
    int charge=0;
    float tot;
    while (serv<=0){
    cout<<"What were the hospital services charges: "<<endl;
    cin>>serv;
    if (serv<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    
    while(charge<=0){
    cout<<"Whats the Medication charges: "<<endl;
    cin>>charge;
    if (charge<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    tot=serv*charge;
    return tot;
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
    float ina();
   float outa();
void file(float);

    int user;
    float ans;
    
    cout<<"Are you an \n 1)in-patient\n 2)out-patient"<<endl;
    cin>>user;
    
    if(user==1){
        ans=in();
        cout<<"Your total is: "<<ans;
    }
    else{
        ans=out();
        cout<<"Your total is: "<<ans;
    }
    
    file(ans);
    
}


float ina(){
    int days=0;
    float rate=0;
    int charge=0;
    int serv=0;
    float tot=0;
    while (days<=0){
    cout<<"How long did you stay for: "<<endl;
    cin>>days;
    if (days<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    while (rate<=0){
    cout<<"What is the rate: "<<endl;
    cin>>rate;
    if (rate<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    while(charge<=0){
    cout<<"Whats the Medication charges: "<<endl;
    cin>>charge;
    if (charge<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    while (serv<=0){
    cout<<"What were the hospital services charges: "<<endl;
    cin>>serv;
    if (serv<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    tot= days*rate+serv+charge;
    return tot;
}

float outa(){
    int serv=0;
    int charge=0;
    float tot;
    while (serv<=0){
    cout<<"What were the hospital services charges: "<<endl;
    cin>>serv;
    if (serv<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    
    while(charge<=0){
    cout<<"Whats the Medication charges: "<<endl;
    cin>>charge;
    if (charge<0){
        cout<<"Input a positive value"<<endl;
    }
    }
    tot=serv*charge;
    return tot;
}

void file(float ans){
    //save in file
    int user1;
    
    user1=ans;
}
   


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 3*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */
    void flip();
void prob10(){



    cout<<"All of the prime numbers are "<<endl;
    flip();
   
}


void flip(){
    int a=2;
    cout<<"1\n3\n5\n7"<<endl;
    while(a<=100){
        if((a%2==0)||(a%3==0)||(a%4==0)||(a%5==0)||(a%6==0)||(a%7==0)||(a%8==0)||(a%9==0)){
            
        }
        else {
            cout<<a<<endl;
        }
        a++;
    }
}

   
int sale(){
    int in;
    do{
    cout<<"How much did you make?"<<endl;
    cin>>in;
    
    if(in<0){
        cout<<"Please enter a positive number"<<endl;
    }
    }while (in < 0);
    return in;
}