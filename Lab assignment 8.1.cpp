/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class account                //declaration of class
{
private:                     //private access specifier
  char cust_name[20];
  int  acc_no;
  char acc_type[20];
public:                      //public access specifier
   void get_accinfo()
   {
       cout<<"Enter Customer Name :- ";
       cin>>cust_name;
       cout<<"Enter Account Number :- ";
       cin>>acc_no;
       cout<<"Enter Account Type :- ";
       cin>>acc_type;
   }
   void display_accinfo()
   {
       cout<<"\n\nCustomer Name :- "<<cust_name;
       cout<<"\nAccount Number :- "<<acc_no;
       cout<<"\nAccount Type :- "<<acc_type;
   }
};

class cur_acct : public account         //multiple inheritance
{
static float balance;
  public:
    void disp_currbal()
    {
        cout<<"\nBalance:\n"<<balance;
    }
    void chequebook()
    {
      cout<<"\nChequebook has been issued\n ";
    }
    void deposit_currbal()
    {
      float deposit;
      cout<<"\nEnter amount to Deposit :- ";
      cin>>deposit;
      balance = balance + deposit;
    }
    void withdraw_currbal()
    {
      float penalty,withdraw;
      cout<<"\n\nBalance :- "<<balance;
      cout<<"\nEnter amount to be withdraw :-";
      cin>>withdraw;
      balance=balance-withdraw;
      if(withdraw > balance)                    //if else loop
      {
      penalty=(500-balance)/10;
      balance=balance-penalty;
      cout<<"\nBalance after deducting penalty : "<<balance;
      }
      else
      cout<<"\nAfter Withdrawl your Balance is: "<<balance<<endl;
     }            //end of if else loop
}; 

class sav_acct : public account              //multiple inheritance
{
static float savbal;
  public:
     void disp_savbal()
    {
      cout<<"\nBalance :- "<<savbal;
    }
    void deposit_savbal()
    {
      float deposit;
      cout<<"\nEnter amount to Deposit :- ";
      cin>>deposit;
      
    }
    void withdraw_savbal()
    {
      float withdraw;
      cout<<"\nBalance :- "<<savbal;
      cout<<"\nEnter amount to be withdraw :-";
      cin>>withdraw;
      savbal=savbal-withdraw;
      cout<<"\nAfter Withdrawl your Balance is : "<<savbal<<endl;
     }
};

float cur_acct :: balance;
float sav_acct  :: savbal;



int main()              //main function
{
 
 cur_acct c1;           //object of the class
 sav_acct s1;

 int choice;
  
       c1.get_accinfo();
       while(1)
       {
     cout<<"\nChoose Your choice:-\n";
     cout<<"1)Deposit\n";
     cout<<"2)Withdraw\n";
     cout<<"3)Issue Chequebook\n";
     cout<<"4)Display Balance along with all details\n";
     cout<<"5)Exit\n";
     
     cin>>choice;
     switch(choice)             //switch case
     {
       case 1 : c1.deposit_currbal();
            
            break;
       case 2 : c1.withdraw_currbal();
            
            break;
       case 3 : c1.chequebook();
            
            break;
       case 4 : c1.display_accinfo();
            c1.disp_currbal();
            cout<<endl;
            break;
       case 5 : exit(1) ;       //exit switch case
     }
       } }
     






