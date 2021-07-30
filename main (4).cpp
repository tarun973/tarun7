/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;


int marks()
{   
    int arr[20];
    int i, n;
    cout << "\nEnter the no. of students : ";
    cin >> n;
    for(i = 0; i < n; ++i)
    {
       cout << "Enter the marks " << i + 1 << " : ";
       cin >> arr[i];
    }
    
    for(i = 1;i < n; ++i)
    {
       if(arr[0] < arr[i])
       arr[0] = arr[i];
    }
    cout << "\nMaximum marks = " << arr[0];
    
    for(i = 1;i < n; ++i)
    {
       if(arr[0] > arr[i])
       arr[0] = arr[i];
    }
    cout << "\nMinimum marks = " << arr[0];
    
}

int main()
{
    int i = 0;
    int option;
    do
    {
        cout<<"\n1. Enter the marks \n";
        
        cout<<"2. Exit\n";
    
        cout<<"\nEnter your option: ";
        cin>>option;
    
        switch(option)
        {
            case 1: marks();
                break;
            case 2: return 0;
                break;
            default: cout<<"\nSelect the apporpriate option";
        }
    
    }while(option);
    
}





