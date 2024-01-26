#include <iostream>
using namespace std;

int main(){
	int age;
	cin>>age;
	
	if((age<30)&&(age>1)){
		cout<<"You cannot come to part"<<endl;
	}
	else if(age==18){
		cout<<"you must purchase kids pass"<<endl;
	}
	else{
		cout<<"please enter your age"<<endl;
	}


	
}
