#include <iostream>
using namespace std;
int main()
{
/* Loop in c++
There are 3 Types of loops in C++
1. for Loop
2. while loop
3. Do-while loop
*/

/*syntax of for Loop
for(int condition increament){
	statement
}
for(int datatype=0; datatype<10; datatype++){
	print
}
*/
cout<<"for Loop"<<endl;
for (int i=1; i<10; i++){
	cout<<i<<endl;
}


/* synatx of while loop
while(condition){
statement
}
int b =1;
while(true){
cout<<b<<endl;
b++
}

int b =1;
while(b<=40){
cout<<b<<endl;
b++
}

*/
cout<<"Wile Loop"<<endl;
int b=1;
while(b<=40){
cout<<b<<endl;
b++;
}

/* syntax of  do-while loop
int c=1;
do{
print;
c++;
}while(c<=40)

*/
cout<<"do-Wile Loop"<<endl;
int c=1;
do{
	cout<<c<<endl;
	c++;
}while(false);

  return 0;
}
