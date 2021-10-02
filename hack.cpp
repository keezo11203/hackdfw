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
   
   int mental;
   int reason;
   
  cout << " On a scale of 1 to 10, How are you feeling today?: "<< endl;
  cin >> mental; 
 if ( mental < 4 ) 
   cout << " Oh No! Why is that?" << endl; // print message
   cin >> reason;
 }

  
  return 0; // tells the computer everything 
}
