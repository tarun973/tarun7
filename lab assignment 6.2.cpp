/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class employee               //declaration of the class employee
{
    	private:             //private access specifier

       char name[20], dept[20];
       int id;
       float salary;
       
        public:               //public access specifier
        
         friend class Sales;      //friend function
        
         void details();           //member function to input the details
	     void display();           //member function to display the details
		
};

class Sales               //declaration of the class Sales
{ 
    private:              //private access specifier
    
    int sales;
    float incentives;
    char performance;
    public:                //public access specifier
    
void cal_incentives(employee emp)           //calling the friend function
   {
         cout<<"\nEnter no of sales: ";
	     cin>>sales;
	     
		if(sales > 50  && sales < 100)
		{
			incentives = (10*emp.salary)/100;
			
		}
		
		else if(sales > 100  && sales < 150)
		{
			incentives = (20*emp.salary)/100;
			
		}
		
		else if(sales > 150)
		{
			incentives = (30*emp.salary)/100;
			
		}
		
		cout<<"The incentive that the employee gets is:"<<incentives<<endl;

}
void print_performance();              //member function to print the performance of the employee

};

void employee :: details()
{   
    cout<<"Enter employee name: ";
	cin>>name;
	cout<<"\nEnter employee id: ";
	cin>>id;
	cout<<"\nEnter the basic salary of the employee: ";
	cin>>salary;
	cout<<"\nEnter the department : ";
	cin>>dept;
	
}

void employee :: display()
{
    cout<<"\nName:"<<name<<endl;
    cout<<"ID:"<<id<<endl;
    cout<<"Department:"<<dept<<endl;
    cout<<"Salary:"<<salary<<endl;
             
}



void Sales ::print_performance()
{
     cout<<"\nEnter no of sales: ";
	     cin>>sales;
	     
		if(sales > 150 )
		{
		cout<<"Performance is excellent "<<endl;
		}
		
		if(sales > 100 && sales < 150)
		{
		cout<<"Performance is good "<<endl;
		}
		
		if(sales > 50 && sales < 100 )
		{
		cout<<"Performance is satisfactory "<<endl;
		}
		
		if(sales < 50 )
		{
		cout<<"Performance is poor "<<endl;
		}
		
	

             
}



int main()                          //main function
{
    employee emp1;                  //object of the class employee
    Sales s1;                       //object of the class Sales
    
    emp1.details();
    emp1.display();
    
   
    s1.print_performance();
    s1.cal_incentives(emp1);
    
    
    return 0;
}




















