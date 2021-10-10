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
protected:                     //protected access specifier
  char cust_name[20];
  int  acc_no, age;
  char address[50];
  float balance=0.000;
public:                      //public access specifier
   void get_accinfo()
   {
       cout<<"Enter Customer Name :- ";
       cin>>cust_name;
       cout<<"Enter Account Number :- ";
       cin>>acc_no;
        cout<<"Enter the age :- ";
       cin>>age;
       cout<<"Enter the address :- ";
       cin>>address;
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
      float withdraw;
      cout<<"\n\nBalance :- "<<balance;
      cout<<"\nEnter amount to be withdraw :-";
      cin>>withdraw;
      balance=balance-withdraw;
      cout<<"\nAfter Withdrawl your Balance is: "<<balance<<endl;
     }            
}; 



class life_insurance : public account            //inheritance
{
 	protected:                                   //protected access specifier
 int policyNo,sumAssured,premium,years;
 
     public:                                    //public access specifier
     void read_data()
     {
         cout<<"Enter the policy number:"<<endl;
         cin>>policyNo;
         cout<<endl;
         
         cout<<"Enter the sum assured amount:"<<endl;
         cin>>sumAssured;
         cout<<endl;
         
         cout<<"Enter the duration of the insurance:"<<endl;
         cin>>years;
         cout<<endl;
     }
     
     void cal_premium()
     {
         if (age<25) 
         {
           cout<<"The premium amount is 3K/year/lakh"<<endl;
        } 
    else if (26<age<45) 
    {
         cout<<"The premium amount is 4K/year/lakh"<<endl;
    } 
    else if (46<age<60) 
    {
         cout<<"The premium amount is 5K/year/lakh"<<endl;
    } 
    else (age>60) ;
    {
        cout<<"No premium"<<endl;
    }
     }
     
    

};
class car_insurance                        //declaration of class 
 {
 		protected:                         //protected access specifier
    int pNo,premium,duration;
    char details[20];
 
     public:
     void read_Cdata()
     {
         cout<<"Enter the policy number:"<<endl;
         cin>>pNo;
         cout<<endl;
         
         cout<<"Enter the details of the car:"<<endl;
         cin>>details;
         cout<<endl;
         
         cout<<"Enter how old the car is:"<<endl;
         cin>>duration;
         cout<<endl;
     }
     
     void cal_Cpremium()
     {
    if (duration<1) 
    {
    cout<<"The premium amount is 5K/year/lakh"<<endl;
    } 
    else if (2<duration<4) 
    {
    cout<<"The premium amount is 3K/year/lakh"<<endl;
    } 
    else (5<duration<7) ;
    {
     cout<<"The premium amount is 2K/year/lakh"<<endl;
    }
     }
    };
class claim : public life_insurance, public car_insurance       //hybrid inheritance
{  
    protected:
    int term, claim_amt,damages;
    
 	public:
 	void life_claim()
 	{
 	    cout<<"Enter your policy duration:"<<endl;
 	    cin>>term;
 	    cout<<endl;
 	    
 	      if (term<5) 
    {
           cout<<"No Amount will be claimed"<<endl;
    } 
           else if (6<duration<12) 
    {   
        claim_amt = (0.25*sumAssured);
         cout<<"Amount claimed : "<<claim_amt<<endl;
    } 
            else if (13<duration<20) 
    {
           claim_amt = (0.50*sumAssured + 0.20*sumAssured);
         cout<<"Amount claimed : "<<claim_amt<<endl;
    }
             else  (duration>20) ;
    {
          claim_amt = (sumAssured +sumAssured);
         cout<<"Amount claimed : "<<claim_amt<<endl;
    }
 	}
 	
 	void car_claim()
 	{
 	    cout<<"Enter the amount spent on car damages: "<<endl;
 	    cin>>damages;
 	    cout<<endl;
 	    
 	    cout<<"Your total claim + balance in your account:"<<balance + damages<<endl;
 	}
 	
};
  
int main()                 //main function
{
    account a;
    a.get_accinfo();
    a.deposit_currbal();
    a.withdraw_currbal();
    
    life_insurance l;
    l.read_data();
    l.cal_premium();
    
    car_insurance c1;
    c1.read_Cdata();
    c1.cal_Cpremium();
    
    claim c;
    c.life_claim();
    c.car_claim();
    
 	return 0;
}               	//end of program





