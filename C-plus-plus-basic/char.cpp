#include <iostream>
 #include <cctype>
 using namespace std;
int main()
{
    // defining the variables
     char responses;
     responses = 'y'; 
     char nonPrintable;
     nonPrintable = '\t'; // tab
     nonPrintable ='\n'; // new line
     nonPrintable = '/';
    // exit the application
 

    char response;
    response = 'y';
    if (response >= 'a' && response <= 'z') {
        cout << "This is a lower case character." << endl;
    }
   // exit the application
   
    return 0;
	 }
