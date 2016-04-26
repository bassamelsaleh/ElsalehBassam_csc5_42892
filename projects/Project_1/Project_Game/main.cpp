/*
 * File:   main.cpp
 * Bassam Elsaleh
 * Project - Game (name still not decided)
 * Created on April 18, 2016, 2:21 PM
 * Modified on ----
 */

#include <iostream>
#include <iomanip>
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
    int a;

    cout<<endl;
    for(a=0;a!=1;) {

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
        
        cout<<" Block - a block will stop 2 DAM that would "
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
        
        
    }
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
    cout<<endl;
    cout<<"P1        CPU"<<endl;
      cout<<hp1<<"        "<<hpc<<endl; 
    
      
      
      //1 = punch
      //2 = spc.
      //3 = block
      //4 = counter
    
    while(hp1>0 && hpc>0 && player!=5){
    while(hp1>0 && hpc>0 && player!=5 && spcCP<=3 && spcCC<=3) {
        cpu=(rand()%(max-min+1))+min;
        cout<<"Spc. P1   Spc. P2"<<endl;
        cout<<spcCP<<"         "<<spcCC<<endl;
    
        cout<<endl;
      cout<<"\n\t\tPlayer One Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. SpcAttack. Attack\n"
            <<"3. Block\n"
            <<"4. Counter\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>player;
      cpu=(rand()%(max-min+1))+min;
      cout<<endl;
      
      
      switch (player){
          
          
          case 1: //player one punches
              if(cpu==1){
              cout<<"Both players punch each other dealing 2 DMG."<<endl;
          hp1=hp1-2;
          hpc=hpc-2;
          }
          else if(cpu==2){
             cout<<"Player 1 hits for 2 and Player 2 hits hard for 4 DMG"<<endl;
          hp1=hp1-4;
          hpc=hpc-2;
          spcCC++;// adds a counter to cpu
          }
          else if(cpu==3){
              cout<<"Player 2 blocks the DMG form Player 1"<<endl;
              
          }
          else if(cpu==4){
              cout<<"Player 1 hit for 2 as player 2 misses the counter"<<endl;
          hpc=hpc-2;
          
          }
          break;
          
         
          case 2:  //player one uses spc            
              
              if(cpu==1){
                cout<<"Player 1 hits hard for 4 DMG as player 2"
                    " hits for 2 DMG"<<endl;
          hp1=hp1-2;
          hpc=hpc-4;
          spcCP++;// adds counter to player
          }
          else if(cpu==2){
              cout<<"both players hit hard for 4 GMG"<<endl;
          hp1=hp1-4;
          hpc=hpc-4;
          spcCP++;// adds counter to player
          spcCC++;// adds counter to cpu
          }
          else if(cpu==3){
             cout<<"Player 2 blocks 2 DMG form Player 1 power hit"<<endl;
             hpc=hpc-2;
             spcCP++;// adds counter to player
          }
          else if(cpu==4){
              cout<<"Player 2 counters the spc. Attack and deals 4 DMG"
                      " to Player 1 "<<endl;
          hp1=hp1-4;
          spcCP++;// adds counter to player ever though it was blocked
          }
          break;
          
          
          case 3: //player one blocks 
              
          if(cpu==1){
                cout<<"Player 1 blocks the DMG form player 2"<<endl;

          }
          else if(cpu==2){
              cout<<"Player 1 blocks 2 DMG from Player"
                      " player 2's power hit."<<endl;
              hp1=hp1-2;
              spcCC++;// adds counter to cpu
          }
          else if(cpu==3){
              cout<<"Both players step back to make "
                      "their next move."<<endl;
          }
          else if(cpu==4){
              cout<<"Player 2 tries to grab player 1"<<endl;
          }
          break;
          
         
          case 4:  //player one counters
              
              if(cpu==1){
                cout<<"Player 1 misses the counter and "
                        "takes 2 DMG form player 2"<<endl;
          hp1=hp1-2;
          }
          else if(cpu==2){
              cout<<"Player 1 counters the massive blow and deals 4 DMG to "
                      " player 2."<<endl;
              hpc=hpc-4;
              spcCC++;// adds counter to cpu
          }
          else if(cpu==3){
              cout<<"Player 1 tries to grab Player 2."<<endl;
          }
          else if(cpu==4){
              cout<<"Both focus for their next move."<<endl;
          }
          break;
          
      }
      cout<<endl;
      
      cout<<"P1   CPU"<<endl;
     cout<<hp1<<"   "<<hpc<<endl; 
    }
    //************************************************************************\\
    // after both the player and cpu uses all their counters
    
    if(spcCP>=4 && spcCC>=4){
    while(hp1>0 && hpc>0 && player!=5){
        cout<<"both are out"<<endl;
        const int min=1;
    const int max=3;
        cout<<endl;
      cout<<"\n\t\tPlayer One Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. XXXXXXXX\n"
            <<"3. Block\n"
            <<"4. Counter\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>player;
      cpu=(rand()%(max-min+1))+min;
      while(cpu==2){
          cpu=(rand()%(max-min+1))+min;
      }
      cout<<endl;
      

      switch (player){
          
          case 1:  //both are out of spc. player one punches
            
              if(cpu==1){
              cout<<"Both players punch each other dealing 2 DMG."<<endl;
          hp1=hp1-2;
          hpc=hpc-2;
          }
          else if(cpu==2){
              cout<<"Player 2 is out of spc. moves"<<endl;//incase computer 
              //inputs a spc. move.
          }
          else if(cpu==3){
              cout<<"Player 2 blocks the DMG form Player 1"<<endl;
          }
          else if(cpu==4){
              cout<<"player 2 has no counter left"<<endl;
          }
          break;
          
          
          case 2:  //both players shouldn't have any more counters
              
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
          
          
          case 3:  //both are out of spc. player one blocks 
              
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
          
          
          case 4:  //both are out of counters player one counters
              
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
      cout<<endl;
      cout<<"P1   CPU"<<endl;
      cout<<hp1<<"   "<<hpc<<endl;   
      cout<<"Spc. P1   Spc. P2"<<endl;
        cout<<"X"<<"         "<<"X"<<endl;
      
    }
    }
    
    
    
    //************************************************************************\\
    //after counter from player one is used
    else if(spcCP>3){
    while(hp1>0 && hpc>0 && player!=5 && spcCP>=4 && spcCC<4)
    {
        cout<<"P1 is out of counters for power hits"<<endl;
        const int min=1;
    const int max=4;
        cout<<endl;
      cout<<"\n\t\tPlayer One Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. XXXXXXXX\n"
            <<"3. Block\n"
            <<"4. Counter\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>player;
      cpu=(rand()%(max-min+1))+min;
      cout<<endl;
      
      
      
      switch (player){
          case 1:  //player one is out and punches
              
              if(cpu==1){
              cout<<"Both players punch each other dealing 2 DMG."<<endl;
          hp1=hp1-2;
          hpc=hpc-2;
          }
          else if(cpu==2){
             cout<<"Player 1 hits for 2 DMG"
                     " and Player 2 hits hard for 4 DMG"<<endl;
          hp1=hp1-4;
          hpc=hpc-2;
          spcCC++;
          }
          else if(cpu==3){
              cout<<"Player 2 blocks the DMG form Player 1"<<endl;
          }
          else if(cpu==4){
              cout<<"Player 1 hits for 2 DMG"
                      " as player 2 misses the counter"<<endl;
          hpc=hpc-2;
          }
          break;
          
          
          case 2:  // player one cant use any more spc. moves
              
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
          
          
          case 3:  //player one is out and blocks
              
              if(cpu==1){
                cout<<"Player 1 blocks the DMG form player 2"<<endl;
          }
          else if(cpu==2){
              cout<<"Player 1 blocks 2 DMG from Player"
                      " player 2's power hit."<<endl;
              hp1=hp1-2;
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
          
          
          case 4:  //player one is out and tries to counter
              
              if(cpu==1){
              cout<<"Player 1 misses the counter as"
                      " Player 2 hits player one for 2 DMG"<<endl;
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
      }
      cout<<"P1   CPU"<<endl;
      cout<<hp1<<"   "<<hpc<<endl;  
      cout<<"Spc. P1   Spc. P2"<<endl;
        cout<<"X"<<"         "<<spcCP<<endl;
       
    }
    }
    
    //************************************************************************\\
    // after cpu used up all their counters
    
    else if(spcCC>3){
    while(hp1>0 && hpc>0 && player!=5 && spcCC>=4 && spcCP<4)
    {
        cout<<"P2 is out"<<endl;
        const int min=1;
    const int max=3;
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
      
      while(cpu==2){
          cpu=(rand()%(max-min+1))+min;
      }
      cout<<endl;
      
     
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
          spcCP=spcCP+1;
          }
          else if(cpu==2){
              cout<<"player 2 is out of counters"<<endl;
              hpc=hpc-4;
          }
          else if(cpu==3){
             cout<<"Player 2 blocks 2 DMG form Player 1 power hit"<<endl;
             hpc=hpc-2;
             spcCP=spcCP+1;
          }
          else if(cpu==4){
              cout<<"player 2 has no counter left"<<endl;
              spcCP=spcCP+1;
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
              cout<<"Player one misses the counter attack"<<endl;
              hp1=hp1-2;
          }
          else if(cpu==2){
              cout<<"Player 2 is out of counters."<<endl;
          }
          else if(cpu==3){
              cout<<"Player 1 tries to grab Player 2."<<endl;
              spcCP++;
          }
          else if(cpu==4){
              cout<<"Both players make a tactical move."<<endl;
          }
          break;
      }
      cout<<endl;
      cout<<"P1   CPU"<<endl;
      cout<<hp1<<"   "<<hpc<<endl;  
      cout<<"Spc. P1   Spc. P2"<<endl;
        cout<<spcCP<<"         "<<"X"<<endl;
       
    }
    }
    cout<<endl;
    if(hp1<=0 && hpc<=0){
        cout<<"You both fainted"<<endl;
    }
    else if(hp1<=0){
        cout<<"           You fainted"<<endl;
    }
    else if(hpc<=0){
        cout<<"             You win"<<endl;
    }
    else{
        cout<<"Player 1 ran away"<<endl;
    }

    
    }
    
}

    


//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************

//two players
void twoP(){
    cout<<endl;
    cout<<"not done yet"<<endl;
    int player=0;//players pick
    int cpu=0;//player two's pick
    int hp1=20;//player ones health
    int hpc=20;//player twos health
    int spcCP=0;//count the times the special move is used by player
    int spcCC=0;//count the times the special move is used by cpu
    unsigned seed = time(0);
    srand(seed);
    cout<<endl;
    cout<<"P1        P2"<<endl;
      cout<<hp1<<"        "<<hpc<<endl; 
    
    
    while(hp1>0 && hpc>0 && player!=5 && cpu!=5){
    while(hp1>0 && hpc>0 && player!=5 && cpu!=5 && spcCP<=3 && spcCC<=3) {
        
        cout<<"Spc. P1   Spc. P2"<<endl;
        cout<<spcCP<<"         "<<spcCC<<endl;
    
        cout<<endl;
      cout<<"\n\t\tPlayer One Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. SpcAttack. Attack\n"
            <<"3. Block\n"
            <<"4. Counter\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>player;
      
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
      //so that the second player wont see player ones move.
      
      cout<<"\n\t\tPlayer Two Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. SpcAttack. Attack\n"
            <<"3. Block\n"
            <<"4. Counter\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>cpu;
      
      cout<<endl;
      
      
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
             cout<<"Player 2 blocks 2 DMG form Player 1 power hit"<<endl;
             spcCP++;
             hpc=hpc-2;
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
              hp1=hp1-2;
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
          
      }
      cout<<endl;
      
      cout<<"P1   P2"<<endl;
     cout<<hp1<<"   "<<hpc<<endl; 
    }
    //************************************************************************\\
    // after bot the player and cpu uses all their counters
    
    if(spcCP>=4 && spcCC>=4){
        cout<<endl;
       cout<<"Spc. P1   Spc. P2"<<endl;
        cout<<spcCP<<"         "<<spcCC<<endl;
        cout<<"both are out"<<endl;
    while(hp1>0 && hpc>0 && player!=5 && cpu!=5){
        
        
        
    
        cout<<endl;
      cout<<"\n\t\tPlayer One Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. XXXXXXXXXX\n"
            <<"3. Block\n"
            <<"4. Counter\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>player;
      
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
      //so that the second player wont see player ones move.
      
      cout<<"\n\t\tPlayer Two Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. XXXXXXXXXX\n"
            <<"3. Block\n"
            <<"4. Counter\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>cpu;
      
      cout<<endl;
      

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
      cout<<endl;
      cout<<"P1   P2"<<endl;
      cout<<hp1<<"   "<<hpc<<endl;   
      cout<<"Spc. P1   Spc. P2"<<endl;
        cout<<"X"<<"         "<<"X"<<endl;
      
    }
    }
    
    
    
    //************************************************************************\\
    //after counter from player one is used
    else if(spcCP>3 && spcCC<4){
        cout<<"P1 is out of counters for power hits"<<endl;
        cout<<"Spc. P1   Spc. P2"<<endl;
        cout<<"X"<<"         "<<spcCC<<endl;
    while(hp1>0 && hpc>0 && player!=5 && spcCP>=4 && spcCC<4 && cpu!=5)
    {
        
        
    
        cout<<endl;
      cout<<"\n\t\tPlayer One Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. XXXXXXXXXX\n"
            <<"3. Block\n"
            <<"4. Counter\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>player;
      
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
      //so that the second player wont see player ones move.
      
      cout<<"\n\t\tPlayer Two Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. SpcAttack. Attack\n"
            <<"3. Block\n"
            <<"4. Counter\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>cpu;
      
      cout<<endl;
      
      
      
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
              spcCC++;
              hp1=hp1-2;
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
              cout<<"Player 1 misses the counter as"
                      " Player 2 hits player one for 2 DMG"<<endl;
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
      }
      cout<<"P1   P2"<<endl;
      cout<<hp1<<"   "<<hpc<<endl;  
      cout<<"Spc. P1   Spc. P2"<<endl;
        cout<<"X"<<"         "<<spcCP<<endl;
       
    }
    }
    
    //************************************************************************\\
    // after player 2 uses all their counters
    
    else if(spcCC>3 && scpCP<4){
        cout<<"P2 is out of counters "<<endl;
        cout<<"Spc. P1   Spc. P2"<<endl;
        cout<<spcCP<<"         "<<"X"<<endl;
    while(hp1>0 && hpc>0 && player!=5 && spcCC>=4 && spcCP<4 && cpu!=5)
    {
        
         
    
        cout<<endl;
      cout<<"\n\t\tPlayer One Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. Spc. Attack\n"
            <<"3. Block\n"
            <<"4. Counter\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>player;
      
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
      //so that the second player wont see player ones move.
      
      cout<<"\n\t\tPlayer Two Pick Your Move\n\n"
            <<"1. Punch\n"
            <<"2. XXXXXXXXXXX\n"
            <<"3. Block\n"
            <<"4. Counter\n"
            <<"5. Forfeit\n"
            <<"Enter your choice: ";
      cin>>cpu;
      
      cout<<endl;
      
     
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
          spcCP=spcCP+1;
          }
          else if(cpu==2){
              cout<<"player 2 is out of counters"<<endl;
              hpc=hpc-4;
          }
          else if(cpu==3){
             cout<<"Player 2 blocks 2 DMG form Player 1 power hit"<<endl;
             spcCP=spcCP+1;
             hpc=hpc-2;
          }
          else if(cpu==4){
              cout<<"player 2 has no counter left"<<endl;
              spcCP=spcCP+1;
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
              cout<<"Player one misses the counter attack"<<endl;
              hp1=hp1-2;
          }
          else if(cpu==2){
              cout<<"Player 2 is out of counters."<<endl;
          }
          else if(cpu==3){
              cout<<"Player 1 tries to grab Player 2."<<endl;
              spcCP++;
          }
          else if(cpu==4){
              cout<<"Both players make a tactical move."<<endl;
          }
          break;
      }
      cout<<endl;
      cout<<"P1   P2"<<endl;
      cout<<hp1<<"   "<<hpc<<endl;  
      cout<<"Spc. P1   Spc. P2"<<endl;
        cout<<spcCP<<"         "<<"X"<<endl;
       
    }
    }
    cout<<endl;
    if(hp1<=0 && hpc<=0){
        cout<<"You both fainted"<<endl;
    }
    else if(hp1<=0){
        cout<<"           Player 2 wins."<<endl;
    }
    else if(hpc<=0){
        cout<<"             Player 1 wins."<<endl;
    }
    else if (player==5 && cpu==5){
        cout<<"     Both players got scared. "<<endl;
    }
    else if (player==5){
        cout<<"     Player 1 ran away."<<endl;
    }
    else if (cpu==5){
        cout<<"     Player 2 ran away."<<endl;
    }
    else {
        
    }
    

    
    }
}