/* 
 * Author: Bassam Elsaleh
 * menu with all the homework assignments to chapter 7
 * Created on May 16, 2016, 9:13 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>
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
                    case 4:prob4();break;                    
                    case 5:prob5();break;
                    case 6:prob6();break;                    
                    case 7:prob7();break;
                    case 8:prob8();break;                    
                    case 9:prob9();break;
                    case 10:prob10();break;
                    default:{
                            cout<<"Exit?"<<endl;
                    }
            };
    }while(choice>0 && choice<11);
    
    //Exit stage right
    return 0;
}
void menu(){
//Display the selection
cout<<"Type 1 to solve problem 1"<<endl;
cout<<"Type 2 to solve problem 2"<<endl;
cout<<"Type 3 to solve problem 3"<<endl;
cout<<"Type 4 to solve problem 4"<<endl;
cout<<"Type 5 to solve problem 5"<<endl;
cout<<"Type 6 to solve problem 6"<<endl;
cout<<"Type 7 to solve problem 8"<<endl;
cout<<"Type 8 to solve problem 10"<<endl;
cout<<"Type 9 to solve problem 12"<<endl;
cout<<"Type 10 to solve problem 13"<<endl;
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
    const int SIZE=10;
    int in[SIZE]={};
    int min=0;
    int max=0;
    
    cout<<"Input any 10 numbers"<<endl;
    for(int count=0;count<SIZE;count++){
        cin>>in[count];
    }
    
        cout<<endl;
    min=in[0];
    for (int count=0;count<SIZE-1;count++){
       if(in[count]>in[count+1] && in[count+1]<min){
        min=in[count+1];
        }
        else;
        }
    max=in[0];
    for (int count=0;count<SIZE-1;count++){
       if(in[count]<in[count+1] && in[count+1]>max){
        max=in[count+1];
        }
        else;
        
    }
    
    cout<<"The lowest numbers is "<<min<<endl;
    cout<<"The highest numbers is "<<max<<endl;
    cout<<endl<<endl;
}



//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 1*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */

void prob2(){
    const int SIZE=12;
    int in[SIZE]={};
    int min=0;
    int max=0;
    int tot=0;
    
    cout<<"Input the amount of rain per month for the"
            " last 12 months "<<endl;
    for(int count=0;count<SIZE;count++){
        cin>>in[count];
        if (in<0){
            cout<<"input a valid number"<<endl;
        cin>>in[count];
        }
    }
    
        cout<<endl;
    min=in[0];
    for (int count=0;count<SIZE-1;count++){
       if(in[count]>in[count+1] && in[count+1]<min){
        min=in[count+1];
        }
        else;
        }
    max=in[0];
    for (int count=0;count<SIZE-1;count++){
       if(in[count]<in[count+1] && in[count+1]>max){
        max=in[count+1];
        }
        else;
    }
    for (int count=0; count<SIZE;count++){
        tot+=in[count];
    }
    tot=tot/12;
    
    cout<<"The Lowest amount of rain was in the "<<min<<" month"<<endl;
    cout<<"The highest amount of rain was in the "<<max<<" month"<<endl;
    cout<<"The average amount of rain was "<<tot<<endl;
    
    cout<<endl<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 1*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */

void prob3(){
    const int TYPE=5;//the type of salsa
    string name[TYPE];
    int sale[TYPE];
    int min=0;
    int max=0;
    string larg;
    string small;
    
    
        cout<<"What are the five types of salsa?"<<endl;
        
        getline(cin, name[0]);
        getline(cin, name[0]);
        getline(cin, name[1]);
        getline(cin, name[2]);
        getline(cin, name[3]);
        getline(cin, name[4]);
        
        for(int count=0; count<TYPE; count++)
        {    
        cout<<"How many jars were sold from "<<name[count]<<endl;
        cin>>sale[count];
        }
        cout<<setw(5)<<"Jar"<<setw(10)<<"Sale"<<endl;
        for(int count=0; count<TYPE; count++){
            cout<<setw(5)<<name[count]<<setw(10)<<sale[count]<<endl;
        }
        
        cout<<endl;
    min=sale[0];
    small=name[0];
    for (int count=1;count<TYPE-1;count++){
       if(sale[count]<min){
        small=name[count];
        }
        }
    
    max=sale[0];
    for (int count=0;count<TYPE-1;count++){
       if(sale[count]<sale[count+1] && sale[count+1]>max){
        larg=name[count+1];
        }
        else;
        
    }
    cout<<"The jar that sold the most was "<<larg<<endl;
    cout<<"The jar that sold the lest was "<<small<<endl;
    
    cout<<endl<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 1*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */

//functions
void enter(int[],int,int);
void prob4(){
    
  const int SIZE=5;
    int number[SIZE]={1,15,3,548,21};
    int n;
    cout<<"Enter the number for n: "<<endl;
    cin>>n;
    cout<<endl;
    enter(number, n, SIZE);    
    
    cout<<endl<<endl;
}
void enter(int num[], int n, int size){
    for (int count=0; count<size;count++){
        if (n=num[count]){
            cout<<num[count]<<endl;
        }
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

void prob5(){
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

    cout<<endl<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 1*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */

//functions
void first(char[],char[][30]);
void prob6(){
    
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
    
    cout<<endl<<endl;
}

void first(char fn[], char dat[][30]){
    ifstream days;
    days.open("days.dat");
    
    
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

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 1*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */

void prob7(){
    const int ROW=3;
    const int COL=3;
        int tot=0;
        int tot2=0;
        int tot3=0;
        int tot4=0;
        int tot5=0;
        int tot6=0;
        int tot7=0;
        int tot8=0;
    
    int one[ROW][COL]={{4,9,2},{3,5,7},{8,1,6}};
    for(int count=0; count<ROW; count++){
        for(int sec=0; sec<COL; sec++){
            cout<<one[count][sec]<<" ";
        }
       cout<<endl;
    }
    
    //row one
    for(int count=0; count<ROW; count++){
        tot+=one[1][count];
    }
    cout<<"Row one added is = "<<tot<<endl;
    
    //row two
    for(int count=0; count<ROW; count++){
        tot2+=one[2][count];
    }
    cout<<"Row two added is = "<<tot2<<endl;
    
    //row three
    for(int count=0; count<ROW; count++){
        
        tot3+=one[2][count];
    }
    cout<<"Row three added is = "<<tot3<<endl;
    
    // diagonal one
    for(int count=0, sec=0; count<ROW; count++, sec++){
        
        tot4+=one[sec][count];
    }
    cout<<"Row diagonal top left to bottom right added is = "<<tot4<<endl;
    
    
    //diagonal two
    for(int count=0,sec=2; count<ROW; count++, sec--){
        
        tot5+=one[count][sec];
    }
    cout<<"Row diagonal bottom left to top right added is = "<<tot5<<endl;
    
    
    //columns one
    for(int count=0; count<ROW; count++){
        tot6+=one[count][0];
    }
    cout<<"Columns one added is = "<<tot<<endl;
    
    //columns two
    for(int count=0; count<ROW; count++){
        tot7+=one[count][1];
    }
    cout<<"Columns two added is = "<<tot2<<endl;
    
    //columns two
    for(int count=0; count<ROW; count++){
        tot8+=one[count][2];
    }
    cout<<"Columns three added is = "<<tot3<<endl;
    
    cout<<endl<<endl;
    
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 1*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */

//functions
void prntAry(char [],int,int);
int rdfile(char [], char []);
int score(char [], int,char[], int);
void prob8(){
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
    
    cout<<endl<<endl;
            
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

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 1*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */

void prob9(){
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

    cout<<endl<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************Problem 1*******************************************
 *Inputs 
 *      None
 * outputs
 *      None
 */

void prob10(){
    const int TEST=4;
    const int STU=5;
    int tot[STU]={};
    string grad[STU]={};
    int me[STU][TEST]={{}};
    int row=1;
    int final=0;
    int min;
    string name[STU];
    cout<<"ENTER YOUR STUDENTS NAME'S"<<endl;
    
        getline(cin,name[0]);
        getline(cin,name[0]);
        getline(cin,name[1]);
        getline(cin,name[2]);
        getline(cin,name[3]);
        getline(cin,name[4]);
    
    for (int count=0; count<STU; count++,row++){
        cout<<"\t Student #"<<row<<endl;
        cout<<"What score did "<<name[count]<<" get?"<<endl;
        
        
//        for(int sec=1; sec<TEST+1; sec++){
         for(int sec=0; sec<TEST; sec++){
            cout<<"Test #"<<sec+1<<endl;
            cin>>me[count][sec];
            
            //input grade
            if (me[count][sec]<0){
                cout<<"Please enter a valid grade: "<<endl;
                cin>>me[count][sec];
                min=me[count][0];
 
            }
            tot[count]+=me[count][sec];
//            cout << "HERE " << tot[count] << endl;
        }
        min=me[count][0];
//        for (int low=1;low<TEST-1;low++){
        for (int low=1;low<TEST;low++){
            if(me[count][low]<min){
              min=me[count][low];
            }
        }
        tot[count]=tot[count]-min;
        //calculate grade
        final=tot[count]/3;
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

    cout<<endl<<endl;
}