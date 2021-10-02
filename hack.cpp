#include <fstream> //file stream
#include <string> //creates string variables
#include <iostream> //input-output stream
#include <iomanip> //lets you use setw
using namespace std; //uses cout throughout program
//cout means counsle out
//cin means console in
//endl means end line

void printWelcome(string Name){ //creates parameter
   cout << " Hello " << setw(5) << Name; //prints
}

int main()//tells computer this is a C++ program
{
string Name; //creates string
   cout << "Enter your first name: "; //gets name from user
   cin >> Name;//prints
   printWelcome(Name);//calls back to function 
