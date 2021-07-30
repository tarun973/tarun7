/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


float sum(int,float);
double sum(int,double);
double sum(float,double);
float sum(long int,float);
double sum(long double,float);

float sum(int a,float b)
{
    return(a+b);
}
double sum(int a,double b)
{
    return(a+b);
}
double sum(float a,double b)
{
    return(a+b);
}
float sum(long int a,float b)
{
    return(a+b);
}
double sum(long double a,float b)
{
    return(a+b);
}

int main()
{
    int a,b;
    float c,d,e,f;
    double g,h;
    long int i;
    long double j;
    
    cout<<"Enter an int and a float:"<<endl;
    cin>>a>>c;
    cout<<"The value after addition is:"<<a+c<<endl;
    
    cout<<"Enter an int and a double:"<<endl;
    cin>>b>>g;
    cout<<"The value after addition is:"<<b+g<<endl;
    
    cout<<"Enter a float and a double:"<<endl;
    cin>>d>>h;
    cout<<"The value after addition is:"<<d+h<<endl;
    
    cout<<"Enter a long int and float:"<<endl;
    cin>>i>>e;
    cout<<"The value after addition is:"<<i+e<<endl;
    
    cout<<"Enter a long double and float:"<<endl;
    cin>>j>>f;
    cout<<"The value after addition is:"<<j+f<<endl;
    
    

    return 0;
}    

    

