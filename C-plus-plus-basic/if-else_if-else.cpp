#include <iostream>
using namespace std;
int main()
{

cout<<"Please Enter Your Age"<<endl;
int age;
cin>>age;

// selection control Structure : if  else-if else ladder
if((age>0) && (age<18) ){
	cout<<"You Cannot come on my Party"<<endl;
}
else if(age<1){
	cout<<"You are not born yet"<<endl;
}
else if(age==18){
	cout<<"You are a Kid You must get Kid pass"<<endl;
}
else{
	cout<<"You can come on my Party"<<endl;
} 



// Selection Control Structure : switch Cases Statements  
cout<<"Please Enter any num"<<endl;
int num ;
cin>>num;

switch(num){
case  20:
cout<<"you got 20 Num"<<endl;
break;
case  25:
cout<<"your Got 25 Num"<<endl;
break;
case 30:
cout<<"You got 30 Num"<<endl;
break;
default:
	cout<<"no any Num"<<endl;
	break;

}

if ((num<31)&&(num>19)){
	cout<<"Done With switch Case"<<endl;
}

else{
	cout<<"Error"<<endl;
}
  return 0;
}

