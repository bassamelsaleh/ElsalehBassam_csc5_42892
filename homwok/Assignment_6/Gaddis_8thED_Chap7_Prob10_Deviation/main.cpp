/* 
 * File:   main.cpp
 * Author: Bassam
 * Home Work Problems
 * Purpose: Grading Program
 * Modified: on May 11, 2016, 8:20 PM
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//user

//global variables

//functions
void prntAry(char [],int,int);
int rdfile(char [], char []);
int score(char [], int,char[], int);

//Execution starts here
int main(int argc, char** argv) {
    //declare variables
    
    const int SIZE=100;
    char answers[SIZE];
    char user[SIZE];
    
    //open the files
    char fnAns[]="answerkey.dat";
    int nAnswers=rdfile(fnAns,answers);
    char fnUser[]="UserAnswers.dat";
    int nUser=rdfile(fnUser,user);
    
    //print the arrays
    cout<<"The Answer Key"<<endl;
    prntAry(answers,nAnswers,10);
    cout<<endl;
    cout<<"The User Answer"<<endl;
    prntAry(user,nUser,10);
    cout<<endl;
    
   
    //Calculate the results
    int results=score(answers,nAnswers,user,nUser);
    cout<<"Score = "<<results<<" right ->"
            <<1.0f*results/nAnswers*100<<"%"<<endl;
            
    return 0;
}


int score(char a[], int nA,
        char u[],int nU){
    //calculate the results
    int results=0;
    for(int ques=0;ques<nA&&ques<nU;ques++){
        if(a[ques]==u[ques])results++;
    }
    return results;
    
}



void prntAry(char a[],int nIna,int perLine){
    //Loop and output the array
    cout<<endl;
    for(int i=0;i<nIna;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1)){
            cout<<endl;
    }
    }
}



int rdfile(char fn[], char dat[]){
    //Declare variables
    ifstream ansKey;
    
    //open the file
    ansKey.open(fn);
    
    //read form the file
    int n=0;
    while(ansKey>>dat[n]){
        n++;
    }
    
    //close the file
    ansKey.close();
    
    return n;
    
}

