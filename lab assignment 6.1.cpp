/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class ICA               //declaration of class ICA
{
   public:             //public access specifier
   char a[30];
   int roll_no,m1,m2,m3,m4;
   friend int total(ICA);      //friend function
   void info()
   {
       cout<<"Enter name :"<<endl;
       cin>>a;
       cout<<"Enter roll.no :"<<endl;
       cin>>roll_no;
       
   }
   void internal()      //function to input ICA marks
   {
       cout<<"Enter the ICA marks of Math  :"<<endl;
       cin>>m1;
       
       cout<<"Enter the ICA marks of OPP :"<<endl  ;
       cin>>m2;
    
       cout<<"Enter the ICA marks of SE :"<<endl  ;
       cin>>m3;    
    
       cout<<"Enter the ICA marks of DS :"<<endl  ;
       cin>>m4;
    }
   
};
 class TEE              //declaration of the class TEE
{
  public:              //public access specifier
  int t1,t2,t3,t4;
  int e1,e2,e3,e4;
  friend int total(ICA);       //friend function
  void external()              //finction to input TEE marks
  {
  cout<<"Enter the TEE marks of Maths :"<<endl;
  cin>>e1;
  
  cout<<"Enter the TEE marks of OPP :"<<endl;
  cin>>e2;
  
  cout<<"Enter the TEE marks of SE :"<<endl;
  cin>>e3;
  
  cout<<"Enter the TEE marks of DS :"<<endl;
  cin>>e4;
  
 
  }
};
 
 int total(ICA x, TEE y)      //function to calculate the total with parameters of the friend functions
  { 
     
  int t1,t2,t3,t4;
  
   t1= x.m1+y.e1;
   t2= x.m2+y.e2;
   t3= x.m3+y.e3;
   t4= x.m4+y.e4;
   
     cout<<"Total marks in Maths :"<<t1<<endl;
     cout<<"Total marks in OPP :"<<t2<<endl;
     cout<<"Total marks in SE :"<<t3<<endl;
     cout<<"Total marks in DS :"<<t4<<endl;
     
     
     }  
  
  int main()                 //main function
  { 
     
    ICA x1;                 //object of the class ICA
    TEE y1;                 //object of the class TEE
    x1.info();
    x1.internal();
    y1.external(); 
    total(x1,y1);
    
    return 0;
    
  }






