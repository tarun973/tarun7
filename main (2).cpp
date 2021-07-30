/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

float pi=3.14;

float vol(int r,int h)
{
    return(pi*r*r*h);
}
int vol(int b)
{
    return(b*b*b);
}

float vol(float a)
{
    return((4*pi*a*a*a)/3);
}



float vol(float c,int h)
{
    return((pi*c*c*h)/3);
    
}
    
int main()
{
    int r,h,a;
    float b,c;
    cout<<"Enter the radius and the height of a cylinder:"<<endl;
    cin>>r>>h;
    cout<<"Volume of the cylinder is "<<vol(r,h)<<endl;
        
    cout<<"Enter the side of a cube:"<<endl;
    cin>>b;
    cout<<"Volume of the cube is "<<vol(b)<<endl;
        
    cout<<"Enter the radius of sphere: "<<endl;
    cin>>a;
    cout<<"Volume of the sphere is "<<vol(a)<<endl;
        
    cout<<"Enter the radius and height of a cone"<<endl;
    cin>>c>>h;
    cout<<"Volume of the cone is: "<<vol(c,h)<<endl;
        
    float v=vol(r,h)+vol(b)+vol(a)+vol(c,h);
    cout<<" The sum of all the volumes is: "<<v<<endl;
    return 0;
}    

