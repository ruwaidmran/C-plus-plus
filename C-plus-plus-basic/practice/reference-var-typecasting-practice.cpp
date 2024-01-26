#include <iostream>
using namespace std;

int a = 20;
int main(){
	int a = 10;
	int &b =a;
	cout<<b<<endl;
	cout<<::a<<"  Its Global a "<<endl;
	
	int c;
	cout<<"Please Enter Your PIN Code"<<endl;
	cin>>c;
	
	if(c==1234){
		cout<<"your PIN Code is  " <<c;
	}
	else{
		cout<<"Please try again";
	}
	
	
	return 0;
}

