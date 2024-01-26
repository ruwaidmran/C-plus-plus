// there are two types of header Files:
// 1. System header files: it comes with the compiler

#include <iostream>
using namespace std;
// user defined header files: it is Written by the Programmer  
//#include "header.h" // This will Produce an error if header.h is no Present in the current directory

int main()
{

int a=4, b=5;
cout<<"Operators in C++"<<endl;
cout<<"following are the types of operators in c++"<<endl;
// Arithmetic
cout<<"The value of a+b is "<<a+b<<endl;
cout<<"The value of a-b is "<<a-b<<endl;
cout<<"The value of a*b is "<<a*b<<endl;
cout<<"The value of a/b is "<<a/b<<endl;
cout<<"The value of a%b is "<<a%b<<endl;
cout<<"The value of a++ is "<<a++<<endl;
cout<<"The value of b-- is "<<b--<<endl;
cout<<"The value of ++a is "<<++a<<endl;
cout<<"The value of --b is "<<--b<<endl;

// Assigment Operators

//int a =3, b=9;
//char d= 'd';
cout<<endl;
// comparison Operators
cout<<"comparison Operators " <<endl;
cout<<"The Value of a==b is " <<(a==b)<<endl;
cout<<"The Value of a!=b is " <<(a!=b)<<endl;
cout<<"The Value of a>=b is " <<(a>=b)<<endl;
cout<<"The Value of a<=b is " <<(a<=b)<<endl;
cout<<"The Value of a>b is " <<(a>b)<<endl;
cout<<"The Value of a<b is " <<(a<b)<<endl;

cout<<endl;
// comparison Operators
cout<<"Logical Operators " <<endl;
cout<<"The Value of this logical and operators ((a==b)&&(a<b)) is: " <<((a==b) && (a<b))<<endl;
cout<<"The Value of this logical and operators ((a==b)||(a<b)) is: " <<((a==b) || (a<b))<<endl;






















    return 0;
}
