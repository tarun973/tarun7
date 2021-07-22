/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
void sort();
void bookname();
void authorname();
void addbook();
void displaybook();
struct library       //library structure
{
    string bookname;
    string authorname;
    int price;
    string flag;

}lib[100];
int num;


int main()  // Main body
{
    cout <<"library management System"<<endl;
       while(true)
       {
         cout<<"============================================"<<endl;
         cout<<"Press 1 to Add book information:\n";
         cout<<"Press 2 to Display book information:\n";
         cout<<"Press 3 to Search the book by the authors name:\n";
         cout<<"Press 4 to Search the book by its title:\n";
         cout<<"Press 5 to Sorting the books:\n";
         cout<<"Press 6 to Exit:\n";
         int a;
         cin>>a;
         switch(a)    //switch case
         {
         case 1:
            addbook();  //case 1: Add book
             break;
         case 2:
            displaybook();   //case 2: Display book
             break;
         case 3:
           authorname();     //case 3: Author name
             break;
         case 4:
           bookname();       //case 4: Book name
             break;
         case 5:
             sort();         //case 5: Sort book
             break;
         case 6:
             exit(0);        //case 6: Exit
             break;
         default:
             cout<<"Invalid Entry.";

         }

       }

    return 0;
}
void addbook()   // Enter the book description
{

    cout<<"Enter book name"<<endl;
    cin>>lib[num].bookname;
    cout <<"Enter author name"<<endl;
    cin>> lib[num].authorname;
    cout <<"Enter the price of that particular book"<<endl;
    cin>>lib[num].price;
    cout <<"Type yes to continue: " <<endl;
    cin>>lib[num].flag;
    cin.ignore();
    num++;

}
void displaybook()  // Display the book contents
{
    cout << "Display book information"<<endl;
    for(int i=0; i<num; i++)
    {
         cout<<"\nTitle of book is: "<<lib[i].bookname<<endl;
         cout<<"\nName of Author is: "<<lib[i].authorname<<endl;
         cout<<"\nPrice of book is: "<<lib[i].price<<endl;
         cout<<"\nType yes to continue: "<<lib[i].flag<<endl;
    }

}
void authorname()  // Enter the authors name
{
     string a;
     cout <<"Enter authors name"<<endl;
     cin>>a;
     cin.ignore();
     for(int i=0; i<num; i++)
        {
            if(a==(lib[i].authorname))
            {

         cout<<"\nTitle of book is: "<<lib[i].bookname<<endl;
         cout<<"\nName of Author is: "<<lib[i].authorname<<endl;
         cout<<"\nPrice of book is: "<<lib[i].price<<endl;
         cout<<"\nType yes to continue: "<<lib[i].flag<<endl;
            }
        }
}
void bookname()  // Enter the name of the book
{
     string a;
     cout <<"Enter product name"<<endl;
     cin>>a;
     cin.ignore();
     for(int i=0; i<num; i++)
        {
            if(a==(lib[i].bookname))
            {
         cout<<"\nTitle of book is: "<<lib[i].bookname<<endl;
         cout<<"\nName of Author is: "<<lib[i].authorname<<endl;
         cout<<"\nPrice of book is: "<<lib[i].price<<endl;
         cout<<"\nType yes to continue: "<<lib[i].flag<<endl;
            }
        }
}

void sort()  // Sort the books
{
     char str[5][20], t[20];
        int i, j;
    
   for(i=0; i<5; i++)
        {
                cout<<" ";
                cin>>str[i];
        }
        for(i=1; i<5; i++)
        {
                for(j=1; j<5; j++)
                {
                        if(strcmp(str[j-1], str[j])>0)
                        {
                                strcpy(t, str[j-1]);
                                strcpy(str[j-1], str[j]);
                                strcpy(str[j], t);
                        }
                }
        }
        cout<<"\n Names Sorted in Alphabetical Order : \n\n";
        for(i=0; i<5; i++)
        {
                cout<<" ";
                cout<<str[i]<<"\n";
        }
}






