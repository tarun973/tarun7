/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class staff          //declaration of class
{
  protected:         //protected access specifier
      int code;
      char name[10];
  public:            //public access specifier
  int i;
      void getstaff()
      {
    cout<<"\n\nEnter code :-";
    cin>>code;
    cout<<"Enter name :-";
    cin>>name;
      }
      void display_staff()
      {
       cout<<"\nNAME:-"<<name;
       cout<<"\nCODE:-"<<code;
      }
};

class teacher : public staff     //hierarchical inheritance
{      
      char sub[10];
      char pub[10];
  public:
      void create()
      {
    getstaff();
    cout<<"Enter Subject :-";
    cin>>sub;
    cout<<"Enter Publication :-";
    cin>>pub;
      }
      void display()
      {
      
          display_staff();
          cout<<"\nSUBJECT :-"<<sub;
          cout<<"\nPUBLICATION:-"<<pub;
      }
};

class officer : public staff     //hierarchical inheritance
{     
       char grade;
   public:
  
    void create()
    {
       getstaff();
       cout<<"Enter Grade :-";
       cin>>grade;
    }
    void display()
    {  
       
       display_staff();
       cout<<"\nGRADE :-"<<grade;
    }
};

class typist : public staff        //hierarchical inheritance
{
       float speed;
  public:
      void gettypist()
      {
    getstaff();
    cout<<"Enter speed (wpm):-";
    cin>>speed;
      }
      void disp_typist()
      {
      
       display_staff();
       cout<<"\nSPEED :-"<<speed;
      }
};


class casual : public typist
{
     float dailywages;
   public:
       void create()
    {
      gettypist();
      cout<<"Enter Daily Wages :-";
      cin>>dailywages;
    }
    void display()
    { 
          disp_typist();
          cout<<"\nDAILY WAGES:-"<<dailywages;
    }
};

int main()          //main function
{
teacher o1;         //obejct of the class
casual o2;
officer o3;
int choice,i;
while(1)
{


 
   cout<<"\n=====EDUCATION INSTITUTION DATABASE=====\n\n\n";
   cout<<"Choose Category of Information\n";
   cout<<"1)   Teachers\n";
   cout<<"2)   Officer\n";
   cout<<"3)   Typist\n";
   cout<<"4)   Exit\n";
   cout<<"Enter your choice:-";
   cin>>choice;
   switch(choice)               //switch case
   {
       if(choice == 1)          //if loop
       {
      case 1 :  while(1)
        {
       
        cout<<"\n-------TEACHERS INFORMATION-------\n\n";
        cout<<"\nChoose your choice\n";
        cout<<"1) Create\n";
        cout<<"2) Display\n";
        cout<<"Enter your choice:-";
        cin>>choice;
        switch(choice)
        {
         case 1 :  for(i=0;i<2;i++)
               {
                 cout<<endl;
                 o1.create();
                 cout<<endl;
                 }
                 break;
         case 2 : for(i=0;i<2;i++)
               {
                cout<<endl;
                 o1.display();
                 cout<<endl;
               }
             
               break;
         default: cout<<"\nEnter choice is invalid\ntry again\n\n";
         }
        }//if ends
         }
         else if(choice == 2)
         {
      case 2 :   while(1)
         {
         
        cout<<"\n=====OFFICERS INFORMATION=====\n\n";
        cout<<"\nChoose your choice\n";
        cout<<"1) Create\n";
        cout<<"2) Display\n";
        cout<<"Enter your choice:-";
        cin>>choice;
        switch(choice)
        {
         case 1 : for(i=0;i<2;i++)
               {
                cout<<endl;
                o3.create();
                 cout<<endl;
               }
                 break;
         case 2 : for(i=0;i<2;i++)
               {
                cout<<endl;
                 o3.display();
                 cout<<endl;
               }
              
               break;
         default: cout<<"\nInvalid choice\ntry again\n\n";
         }
         }
         }//else if ends
         
       else(choice == 3);
         {
            
      case 3 :  while(1)
        {
       
        cout<<"\n=====TYPIST INFORMATION=====\n\n";
        cout<<"\nChoose your choice\n";
        cout<<"1) Create\n";
        cout<<"2) Display\n";
        cout<<"Enter your choice:-";
        cin>>choice;
        switch(choice)
        {
         case 1 : for(i=0;i<2;i++)
               {
                 cout<<endl;
                 o2.create();
                 cout<<endl;
               }
                 break;
         case 2 : for(i=0;i<2;i++)
               {
                 cout<<endl;
                 o2.display();
                 cout<<endl;
               }
               
               break;
         default: cout<<"\nInvalid choice\ntry again\n\n";
         }
        }
         }//else ends
    }
 }}


