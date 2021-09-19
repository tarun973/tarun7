/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class External1;       //Declaration of class External1
class Internal1        //Declaration pf class Internal1          
{
   public:             //public access specifier

   int m1,m2,m3,m4;
   
   void show()
   {
       cout<<"Internal marks in Maths:"<<endl;
       cin>>m1;
       cout<<"Internal marks in OPP:"<<endl;
       cin>>m2;
       cout<<"Internal marks in SE:"<<endl;
       cin>>m3;
       cout<<"Internal marks in DSA:"<<endl;
       cin>>m4;
   }
   friend void operator +(Internal1, External1);     //binary operator overloading using friend function
   friend void result(Internal1, External1);          //binary operator overloading using friend function
   
};
 class External1             
{
  public:                  //public access specifier

  int e1,e2,e3,e4;
   
   void print()
   {
       cout<<"\nExternal marks in Maths:"<<endl;
       cin>>e1;
       cout<<"External marks in OPP:"<<endl;
       cin>>e2;
       cout<<"External marks in SE:"<<endl;
       cin>>e3;
       cout<<"External marks in DSA:"<<endl;
       cin>>e4;
   }
   friend void operator +(Internal1, External1);
   friend void result(Internal1, External1);
   
};

 
 void operator +(Internal1 i1, External1 i2)            //Binary overloaded operator Call by reference
{
    
   cout<<"\nTotal marks of maths:"<<i1.m1 + i2.e1<<endl;
   cout<<"Total marks of OPP:"<<i1.m2 + i2.e2<<endl;
   cout<<"Total marks of SE:"<<i1.m3 + i2.e3<<endl;
   cout<<"Total marks of DS:"<<i1.m4 + i2.e4<<endl;
    
 }
 
 void result(Internal1 i, External1 e)
 {
     cout<<"\nThe result is:"<<endl;
     
     if((i.m1 + e.e1)<50)
     {
         cout<<"Fail"<<endl;
     }
     
    else if((i.m1 + e.e1)>50)
     {
         cout<<"Pass"<<endl;
     }
     
     if((i.m2 + e.e2)<50)
     {
         cout<<"Fail"<<endl;
     }
    else if((i.m2 + e.e2)>50)
     {
         cout<<"Pass"<<endl;
     }
     
     if((i.m3 + e.e3)<50)
     {
         cout<<"Fail"<<endl;
     }
     
    else if((i.m3 + e.e3)>50)
     {
         cout<<"Pass"<<endl;
     }
     
     if((i.m4 + e.e4)<50)
     {
         cout<<"Fail"<<endl;
     }
     
    else if((i.m4 + e.e4)>50)
     {
         cout<<"Pass"<<endl;
     }
 
  
  
  float total;
  total=((i.m1 +e.e1)+(i.m2 +e.e2)+(i.m3 +e.e3)+(i.m4 +e.e4));
  cout<<"\nThe total marks:"<<total<<endl;
  
  float percent;
  percent=(total/4);
  cout<<"\nThe Percentage is:"<<percent<<"%"<<endl;
  
 }
 
  int main()                 //main function
  { 
     
   Internal1 x1;             //object of class Internal1
   External1 y1;             //object of class External1
   x1.show();
   y1.print();
   
   x1+y1;
   result(x1,y1);
   
    return 0;
    
  }















