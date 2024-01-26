#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  int a = 10;
  a = 25;
  string b ="ruwaid";
  b = "Imran";
  
  char cr='t';
  cr= '4';
 
 cout<<a<<endl<<b<<endl;
 cout<<cr<<endl;
 
 int array[] = {10,20,30};
 string arrays[]={"abc","cde","fgh"};

 cout<<array<<endl<<arrays<<endl;
 
  cout<<"below the variables with constant"<<endl;
 
 
 // Constants 
  const int num= 30;
  const string name  = "ruwaid imran";
  const float fl= 10.9;
  const double dbl = 90.9;
  const char chr = 'v';
  
// we can not change value after const variable
//integior b= 10;
//string  name= "ruwaid khan";
// float fl = 50.0;
//double dbl = 100.22;
//chr = 'c';

  cout<<num<<endl<<name<<endl;
  cout<<fl<<endl;
  cout<<dbl<<endl;
  cout<<chr<<endl;
  
  
  
  
   // Manipulators
  int zz=1, xx=20, yy=3300;
  
 cout<<"The value of W/O setw zz "<<zz<<endl; 
  cout<<"The value of W/O setw xx "<<xx<<endl;
  cout<<"The value of W/O setw yy "<<yy<<endl;
  
  
  cout<<"The value of zz "<<zz<<setw(4)<<endl; 
  cout<<"The value of xx "<<xx<<setw(4)<<endl;
  cout<<"The value of yy "<<yy<<setw(4)<<endl;
  
  // Operator Precedence
  int  rwd=3;
  int  yyt=5;
 int sum = ((((rwd*yyt)-5)+92)-rwd);

cout<<sum<<endl;
    return 0;
}
