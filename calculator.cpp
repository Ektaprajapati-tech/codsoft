#include<iostream>
using namespace std;

int main()
{
         
         int a,b;
         char opt;
         cout<<"Enter the first number: ";
         cin>>a;

         cout<<"Enter the second number: ";
         cin>>b;

         cout<<"Enter operator + or - or * or / : "<<endl;
         cin>>opt;

         if(opt == '+')
         cout<<"Sum = "<<a+b<<endl;

         else if(opt == '-')
         cout<<"Subraction = "<<a-b<<endl;

         else if(opt == '*')
         cout<<"Product = "<<a*b<<endl;

         else if(opt == '/')
         cout<<"Divide = "<<a/b<<endl;

         else
         cout<<"YOU CHOOSE WRONG "<<endl;



}

