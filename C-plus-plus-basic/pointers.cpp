#include <iostream>
using namespace std;
int main()
{
	
	// **************Refernce variable************************
// y store a value of x by "&" 
cout<<"Reference"<<endl;
int x=90;
int & y = x;
cout<<"x value "<<x<<endl;
cout<<"y store value of 'a' "<<y<<endl;

// b store address of a by Pointers "*"
/* Pointer syntax 
int a=3;
int* b = &a;
*/ 
cout<<"Pointers"<<endl;	
int a = 20;
int* b = &a;
cout<<"the address of a is "<<&a<<endl; 
cout<<"a address store in b "<<b<<endl;
cout<<"the value at address b is "<<&b<<endl;





    return 0;
}
