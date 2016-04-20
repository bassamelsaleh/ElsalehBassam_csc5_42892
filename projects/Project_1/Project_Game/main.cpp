/*
 * File:   main.cpp
 * Bassam Elsaleh
 * Project - Game (name still not decided)
 * Created on April 18, 2016, 2:21 PM
 * Modified on ----
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void menu();
void rules();
void oneP();
void twoP();
//Execution Begins Here


int main(int argc, char** argv) {
    int player1;//the users input.
    int choice;//menu pick
    
    do 
    {
        //Display the menu
        menu();
         //Read the choice
            cin>>choice;
            //Solve a problem that has been chosen.
            switch(choice){
                    case 1:oneP();break;                    
                    case 2:twoP();break;
                    case 3:rules();break;
                    default:{
                            cout<<"Exit?"<<endl;
                    }
            };
    }while (choice != 4);

    return 0;
}

//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************

//Game Menu
void menu(){
    cout<<endl;
      cout<<"\n\t\tFighter Fighter\n\n"
            <<"1. Single Player\n"
            <<"2. Two Players\n"
            <<"3. rules\n"
            <<"4. Quit the Program\n"
            <<"Enter your choice: ";
}

//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************

//Game Rules
void rules(){
    cout<<endl;
    int a;
    int b=0;
    do {
       cout<<"This game is a turn by turn fighting game, where each"
       " player will start with 20 Health Point, or HP, once a player"<<endl<<
       "hits 0 HP or if one the payers forfeits, the game ends "
       "and the remaining player wins the game."<<endl<<endl<<"In order to"
       " lower the opponents HP each player must inflect Damage ,"
       "or DMG. Each play will do so by picking"<<endl<<"a move each turn "
       "and see the result of their moves, be sure to keep  track "
       "of your own health to see when to"<<endl<<"Defend, or DEFF, yourself"
       " or if its safe to hit the opponent to be the best fighter around."
       <<endl<<endl<<endl;
        
        cout<<"     There are 2 types of attacks: "<<endl<<endl;
        
        cout<<" Punch - a punch is a standard attack that "
                "will inflict 2 DMG to your opponent."<<endl<<endl;
        
        cout<<" Spc. Attack - a Special Attack will inflect 4 DMG to your"
               "opponent, but keep in mind that you can only use"<<endl<<" this"
                "ability 3 time per match."<<endl<<endl<<endl;
        
  cout<<"     There are 2 way to DEFF yourself form these attacks:"<<endl<<endl;
        
        cout<<" Block - a block will stop the DAM that would "
                "naturally hit you from both types of Attacks,"
                " but no damage will be dealt to the other player."<<endl<<endl;
        
        cout<<" Counter - will only affect Spc. Attacks, but unlike"
                "Spc. Attacks you may activate it whenever you like"<<endl<<
                " but if be aware of what your opponent might do,"
                "because punches will not be countered and will just do DMG"
                <<endl<<endl;
        
        cout<<" Forfeit - You realized you made a mistake fighting "
                "this individual"<<endl<<" so you surrender a win"
                " to your opponent and the game will end."<<endl<<endl;
        
        cout<<" Each game will end by announcing the winner and take you "
                "back to the main menu."<<endl<<" when you are ready press"
                " 1 and ENTER."<<endl<<endl;
        cin>>a;
        
        
    }while(a!=1);
}

//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************

//one player
void oneP(){
    const int min=1;
    const int max=4;
    int player=0;//players pick
    int cpu;//cpu's pick
    int hp1=20;//player ones health
    int hpc=20;//player twos health
    int spcCP=0;//count the times the special move is used by player
    int spcCC=0;//count the times the special move is used by cpu
    unsigned seed = time(0);
    srand(seed);
    
    
    while(hp1>0 && hpc>0 && player!=5){
    do{
        cpu=(rand()%(max-min+1))+min;
        cout<<spcCP<<"  "<<spcCC<<endl;
    
        cout<<endl;
      cout<<"\n\t\tPlayer One Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. Spc. Attack\n"
            <<"3. Block\n"
            <<"4. Counter\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>player;
       cpu=(rand()%(max-min+1))+min;
      
      switch (player){
          
          case 1:
              if(cpu==1){
              cout<<"Both players punch each other dealing 2 DMG."<<endl;
          hp1=hp1-2;
          hpc=hpc-2;
          }
          else if(cpu==2){
             cout<<"Player 1 hits for 2 and Player 2 hits hard for 4 DMG"<<endl;
          hp1=hp1-4;
          hpc=hpc-2;
          spcCC++;
          }
          else if(cpu==3){
              cout<<"Player 2 blocks the DMG form Player 1"<<endl;
          }
          else if(cpu==4){
              cout<<"Player 1 hit for 2 as player 2 misses the counter"<<endl;
          hpc=hpc-2;
          
          }
          break;
          
         
          case 2:              
              
              if(cpu==1){
                cout<<"Player 1 hits hard for 4 DMG as player 2"
                    " hits for 2 DMG"<<endl;
          hp1=hp1-2;
          hpc=hpc-4;
          spcCP++;
          }
          else if(cpu==2){
              cout<<"both players hit hard for 4 GMG"<<endl;
          hp1=hp1-4;
          hpc=hpc-4;
          spcCP++;
          spcCC++;
          }
          else if(cpu==3){
             cout<<"Player 2 blocks the DMG form Player 1 power hit"<<endl;
             spcCP++;
          }
          else if(cpu==4){
              cout<<"Player 2 counters the spc. Attack and deals 4 DMG"
                      " to Player 1 "<<endl;
          hp1=hp1-4;
          spcCP++;
          }
          break;
          
          
          case 3:
              
          if(cpu==1){
                cout<<"Player 1 blocks the DMG form player 2"<<endl;

          }
          else if(cpu==2){
              cout<<"Player 1 blocks  the DMG from Player"
                      " player 2's power hit."<<endl;
              spcCC++;
          }
          else if(cpu==3){
              cout<<"Both players step back to make "
                      "their next move."<<endl;
          }
          else if(cpu==4){
              cout<<"Player 2 tries to grab player 1"<<endl;
          }
          break;
          
         
          case 4:
              
              if(cpu==1){
                cout<<"Player 1 misses the counter and "
                        "takes 2 DMG form player 2"<<endl;
          hp1=hp1-2;
          }
          else if(cpu==2){
              cout<<"Player 1 counters the massive blow and deals 4 DMG to "
                      " player 2."<<endl;
              hpc=hpc-4;
              spcCC++;
          }
          else if(cpu==3){
              cout<<"Player 1 tries to grab Player 2."<<endl;
          }
          else if(cpu==4){
              cout<<"Both focus for their next move."<<endl;
          }
          break;
          if (player==2 && cpu==2){
              spcCP++;
              spcCC++;
          }
          else if (cpu==2){
              spcCC++;
          }
          else if (player==2){
              spcCP++;
          }
      }
      
      cout<<"P1   CPU"<<endl;
     cout<<hp1<<"   "<<hpc<<endl;   
    }while(hp1>0 && hpc>0 && player!=5 && spcCP<=3 && spcCC<=3); 
    
    //************************************************************************\\
    // after bot the player and cpu uses all their counters
    
    if(spcCP>=4 && spcCC>=4){
    while(hp1>0 && hpc>0 && player!=5){
        const int min=1;
    const int max=3;
        cout<<endl;
      cout<<"\n\t\tPlayer One Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. Spc. Attack\n"
            <<"3. Block\n"
            <<"4. XXXXXXX\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>player;
      cpu=(rand()%(max-min+1))+min;
      

      switch (player){
          case 1:
            
              if(cpu==1){
              cout<<"Both players punch each other dealing 2 DMG."<<endl;
          hp1=hp1-2;
          hpc=hpc-2;
          }
          else if(cpu==2){
              cout<<"Player 2 is out of spc. moves"<<endl;
          }
          else if(cpu==3){
              cout<<"Player 2 blocks the DMG form Player 1"<<endl;
          }
          else if(cpu==4){
              cout<<"player 2 has no counter left"<<endl;
          }
          break;
          
          
          case 2:
              
              if(cpu==1){
              cout<<"Both Players are out of counters"<<endl;
          }
         else if(cpu==2){
              cout<<"Both Players are out of counters"<<endl;
          }
          else if(cpu==3){
              cout<<"Both Players are out of counters"<<endl;
          }
          else if(cpu==4){
              cout<<"Both Players are out of counters"<<endl;
          }
          break;
          
          
          case 3:
              
              if(cpu==1){
                cout<<"Player 1 blocks the DMG form player 2"<<endl;
          }
          else if(cpu==2){
               cout<<"Player 2 is out of spc. moves"<<endl;
          }
         else if(cpu==3){
              cout<<"Both players step back to make "
                      "their next move."<<endl;
          }
         else if(cpu==4){
              cout<<"Player one leers at Player 2"<<endl;
          }
          break;
          
          
          case 4:
              
              if(cpu==1){
              cout<<"Player 2 hits for 2 DMG"<<endl;
              hp1=hp1-2;
          }
         else if(cpu==2){
              cout<<"Player 2 is out of spc. moves"<<endl;
          }
          else if(cpu==3){
              cout<<"Both Players get in close"<<endl;
          }
          else if(cpu==4){
              cout<<"Both players take a step back"<<endl;
          }
          break;
      }
      cout<<"P1   CPU"<<endl;
      cout<<hp1<<"   "<<hpc<<endl;   
    }
    }
    
    
    
    //************************************************************************\\
    //after counter from player one is used
    else if(spcCP>4){
    while(hp1>0 && hpc>0 && player!=5 && spcCP<4)
    {
        const int min=1;
    const int max=4;
        cout<<endl;
      cout<<"\n\t\tPlayer One Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. Spc. Attack\n"
            <<"3. Block\n"
            <<"4. XXXXXXX\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>player;
      cpu=(rand()%(max-min+1))+min;
      
      
      
      switch (player){
          case 1:
              
              if(cpu==1){
              cout<<"Both players punch each other dealing 2 DMG."<<endl;
          hp1=hp1-2;
          hpc=hpc-2;
          }
          else if(cpu==2){
             cout<<"Player 1 hits for 2 and Player 2 hits hard for 4 DMG"<<endl;
          hp1=hp1-4;
          hpc=hpc-2;
          }
          else if(cpu==3){
              cout<<"Player 2 blocks the DMG form Player 1"<<endl;
          }
          else if(cpu==4){
              cout<<"Player 1 hit for 2 as player 2 misses the counter"<<endl;
          hpc=hpc-2;
          spcCC++;
          }
          break;
          
          
          case 2:
              
              if(cpu==1){
              cout<<"You are out of counters"<<endl;
          }
         else if(cpu==2){
              cout<<"You are out of counters"<<endl;
          }
          else if(cpu==3){
              cout<<"You are out of counters"<<endl;
          }
          else if(cpu==4){
              cout<<"You are out of counters"<<endl;
          }
          break;
          break;
          
          
          case 3:
              
              if(cpu==1){
                cout<<"Player 1 blocks the DMG form player 2"<<endl;
          }
          else if(cpu==2){
              cout<<"Player 1 blocks the DMG from Player"
                      " player 2's power hit."<<endl;
          }
          else if(cpu==3){
              cout<<"Both players step back to make "
                      "their next move."<<endl;
          }
          else if(cpu==4){
              cout<<"Player 2 tries to grab player 1"<<endl;
              spcCC++;
          }
          break;
          
          
          case 4:
              
              if(cpu==1){
              cout<<"Player one is out of counters"<<endl;
          }
          else if(cpu==2){
              cout<<"Player 1 counters the massive blow and deals 4 DMG to "
                      " player 2."<<endl;
              hpc=hpc-4;
              spcCP++;
          }
          else if(cpu==3){
              cout<<"Player 1 tries to grab Player 2."<<endl;
              spcCP++;
          }
          else if(cpu==4){
              cout<<"Both focus for their next move."<<endl;
              spcCC++;
              spcCP++;
          }
          break;
      }
      cout<<"P1   CPU"<<endl;
      cout<<hp1<<"   "<<hpc<<endl;   
    }
    }
    
    //************************************************************************\\
    // after cpu uses all their counters
    
    else if(spcCC>4){
    while(hp1>0 && hpc>0 && player!=5 && spcCC<4)
    {
        const int min=1;
    const int max=3;
        cout<<endl;
      cout<<"\n\t\tPlayer One Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. Spc. Attack\n"
            <<"3. Block\n"
            <<"4. XXXXXXX\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>player;
      cpu=(rand()%(max-min+1))+min;
      
      
     
      switch (player){
          case 1:
              
              if(cpu==1){
              cout<<"Both players punch each other dealing 2 DMG."<<endl;
          hp1=hp1-2;
          hpc=hpc-2;
          }
          else if(cpu==2){
              cout<<"player 2 is out of counters"<<endl;
          }
          else if(cpu==3){
              cout<<"Player 2 blocks the DMG form Player 1"<<endl;
          }
          else if(cpu==4){
              cout<<"player 2 has no counter left"<<endl;
          }
          break;
          
          
          case 2:
              
              if(cpu==1){
                cout<<"Player 1 hits hard for 4 DMG as player 2"
                    " hits for 2 DMG"<<endl;
          hp1=hp1-2;
          hpc=hpc-4;
          }
          else if(cpu==2){
              cout<<"player 2 is out of counters"<<endl;
          }
          else if(cpu==3){
             cout<<"Player 2 blocks the DMG form Player 1 power hit"<<endl;
          }
          else if(cpu==4){
              cout<<"player 2 has no counter left"<<endl;
          }
          break;
          
          
          case 3:
              
              if(cpu==1){
                cout<<"Player 1 blocks the DMG form player 2"<<endl;
          }
          else if(cpu==2){
              cout<<"player 2 is out of counters"<<endl;
          }
          else if(cpu==3){
              cout<<"Both players step back to make "
                      "their next move."<<endl;
          }
          else if(cpu==4){
              cout<<"Player 2 has no counter left"<<endl;
          }
          break;
          
          
          case 4:if(cpu==1){
              cout<<"Player one is out of counters"<<endl;
          }
          else if(cpu==2){
              cout<<"player 2 is out of counters"<<endl;
          }
          else if(cpu==3){
              cout<<"Player 1 tries to grab Player 2."<<endl;
              spcCP++;
          }
          else if(cpu==4){
              cout<<"player 2 has no counter left"<<endl;
          }
          break;
      }
      cout<<"P1   CPU"<<endl;
      cout<<hp1<<"   "<<hpc<<endl;   
    }
    }
    else if(hp1<=0 && hpc<=0){
        cout<<"You both fainted"<<endl;
    }
    else if(hp1<=0 || player==5){
        cout<<"           You fainted"<<endl;
    }
    else if(hpc<=0){
        cout<<"             You win"<<endl;
    }

    
    }
    
}

    


//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************

//one player
void twoP(){
    cout<<endl;
    cout<<"will do later"<<endl;
}