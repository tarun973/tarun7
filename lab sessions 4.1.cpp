/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Electricity
{
    private:
    char name[50],month[10]; 
    long int number,current,previous,amount,unit,type;
    
    public:
    void readData();
    void calculateBill();
    void printBill();
};

void Electricity::readData()
{
    
    
    cout<<"Enter the name of the customer: "<<endl;
    cin>>name;
    
    cout<<"Enter the customer number: "<<endl;
    cin>>number;
    
    cout<<"Enter the billing month: "<<endl;
    cin>>month;
    
    cout<<"Previous reading: "<<endl;
    cin>>previous;
    
    cout<<"Current reading: "<<endl;
    cin>>current;
    
    cout<<"Press '1' if commercial and press '2' if non-commercial "<<endl;
    cin>>type;
}

void Electricity::calculateBill()
{
    unit=current-previous;
    if(type==1 && unit<=200)
    {
        amount=unit*5;
    }
    if(type==1 && unit>201)
    {
        amount=unit*10;
    }
    if(type==2 && unit<=100)
    {
        amount=unit*3;
    }
    if(type==2 && unit>101)
    {
        amount=unit*5;
    }
}

void Electricity::printBill()
{   
    cout<<"********ELECTRICITY BILL FOR********"<<endl;
    cout<<"Your Name: "<<name<<endl;
    cout<<"Your Customer Number: "<<number<<endl;
    cout<<"Bill month: "<<month<<endl;
    cout<<"Previous unit reading: "<<previous<<endl;
    cout<<"Current unit reading: "<<current<<endl;
    cout<<"Your total bill amount is: "<<amount<<endl;
}

int main()
{
    Electricity e1;
    
    e1.readData();
    e1.calculateBill();
    e1.printBill();
    return 0;
}






