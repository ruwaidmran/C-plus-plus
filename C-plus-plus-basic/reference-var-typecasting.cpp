#include <iostream>
using namespace std;

int c = 52;
int main(){
int a,b,c;
cout<<"Enter your value A"<<endl;
cin>>a;
cout<<"Enter Value B"<<endl;
cin>>b;
c= a+b;
cout<<c<<" this is total c value"<<endl;
 //We can Global value with => :: before datatype name 
 cout<<"Global below c"<<endl;
cout<<::c<<endl;


// **************Refernce variable************************
// y store x value by & 

int x=10;
int & y = x;
cout<<x<<endl;
cout<<y<<endl;

// **************typecasting variable************************
int d = 45;
float e = 45.46;
cout<<"This value of d is "<<(float)d<<endl;
cout<<"this value of d is "<<float(d)<<endl;

cout<<"this value of d is "<<(int)d<<endl;
cout<<"this value of d is "<<int(d)<<endl;
  
  
cout<<endl;
int r = int (d);

cout<<"This expression is "<<d + d<<endl;
cout<<"This expression is "<<d + int(d)<<endl;
cout<<"This expression is "<<d + (int)d<<endl;

    return 0;
}
