/* 
 * File:   main.cpp
 * Author: Bassam
 * Grade Book
 * Modified on May 11, 2016, 12:54 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int TEST=4;
    const int STU=5;
    int tot[STU]={};
    string grad[STU]={};
    int me[STU][TEST]={{}};
    int row=1;
    int final=0;
    string name[STU];
    cout<<"ENTER YOUR STUDENTS NAME'S"<<endl;
        getline(cin,name[0]);
        getline(cin,name[1]);
        getline(cin,name[2]);
        getline(cin,name[3]);
        getline(cin,name[4]);
    
    for (int count=0; count<STU; count++,row++){
        cout<<"\t Student #"<<row<<endl;
        cout<<"What score did "<<name[count]<<" get?"<<endl;
        
        int gr=0;
        for(int sec=1; sec<TEST+1; sec++){
            cout<<"Test #"<<sec<<endl;
            cin>>me[count][sec];
            if (me[count][sec]<0){
                cout<<"Please enter a valid grade: "<<endl;
                cin>>me[count][sec];
            }
            tot[count]+=me[count][sec];
            gr++;
        }
        final=tot[count]/gr;
        if (final>=90){
            grad[count]="an A";
        }
        else if(final>=80){
            grad[count]="a B";
        }
        else if(final>=70){
            grad[count]="a C";
        }
        else if(final>=60){
            grad[count]="a D";
        }
        else if(final<=59){
            grad[count]="an F";
        }
        cout<<name[count]<<" got "<<grad[count]<<" with an"
                "average of "<<final<<endl;
    }

    
    return 0;
}
