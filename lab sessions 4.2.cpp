/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
 
class Player{
    private:
        char name[20];
        char region[10];
        float bat_avg;
        float bowl_avg;
    public:
        void readData();
        void generateList();
        void sortList();
        void displayList();
    }; 
  Player p[5];
  Player temp;
  
  
void Player :: readData()
{
    for(int i=0; i<5; i++)
    {
    cout<<"Enter the Player's name: "<<endl;
    cin>>p[i].name;
    cout<<"Enter the region: "<<endl;
    cin>>p[i].region;
    cout<<"Enter the Batting Average: "<<endl;
    cin>>p[i].bat_avg;
    cout<<"Enter the Bowling Average: "<<endl;
    cin>>p[i].bowl_avg;
    }
}
void Player::generateList()
    {
     cout<<endl<<"Players with batting avg > 30 and bowling avg < 25:"<<endl; 
     cout<<"***********************************************************"<<endl;
     for(int i=0; i<5; i++)
    {
        if(p[i].bat_avg > 30 && p[i].bowl_avg < 25)
        {
            cout<<"Player name:"<<p[i].name<<endl;
            cout<<"Player region:"<<p[i].region<<endl;
            cout<<"Batting average:"<<p[i].bat_avg<<endl;
            cout<<"Bowling average:"<<p[i].bowl_avg<<endl;
        }
    } 
       
    }
    
    
void Player :: sortList()
{   
   cout<<endl<<"Batting averages of players in ascending order:"<<endl;
   for(int i=0; i<5; i++)
   {
       for(int j=i+1; j<5; j++)
       {
           if(p[i].bat_avg > p[j].bat_avg)
           {
               temp = p[i];
               p[i] = p[j];
               p[j] = temp;
           }
       }
   }
   cout<<"Sorted list of elements:"<<endl;
   cout<<"************************"<<endl;
   for(int i=0; i<5; i++)
   {
   cout<<"The name of the player is:"<<p[i].name<<endl;
   cout<<"The name of the region is:"<<p[i].region<<endl;
   cout<<"The batting average is:"<<p[i].bat_avg<<endl;
   }
   
   cout<<endl<<"Bowling averages of players in ascending order:"<<endl;
   for(int i=0; i<5; i++)
   {
       for(int j=i+1; j<5; j++)
       {
           if(p[i].bowl_avg > p[j].bowl_avg)
           {
               temp = p[i];
               p[i] = p[j];
               p[j] = temp;
           }
       }
   }
   cout<<"Sorted list of elements:"<<endl;
   cout<<"**********************"<<endl;
   for(int i=0; i<5; i++)
   {
   cout<<"The name of the player is:"<<p[i].name<<endl;
   cout<<"The name of the region is:"<<p[i].region<<endl;
   cout<<"The bowling average is:"<<p[i].bowl_avg<<endl;
   }
}
 
  void Player :: displayList()
{   
    cout<<endl<<"The list of all players:"<<endl;
    cout<<"*********************************"<<endl;
    for(int i=0; i<5; i++)
    {
   cout<<"The name of the player is:"<<p[i].name<<endl;
   cout<<"The name of the region is:"<<p[i].region<<endl;
   cout<<"The batting average is:"<<p[i].bat_avg<<endl;
   cout<<"The bowling average is:"<<p[i].bowl_avg<<endl;
    }
    }
    
    
int main()
{
    Player p1;
    
    p1.readData();
    p1.generateList();
    p1.sortList();
    p1.displayList();
    
    
    return 0;
}












