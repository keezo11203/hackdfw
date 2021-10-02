#include <fstream>
#include <string> 
#include <iostream> 
#include <iomanip> 
using namespace std; 

void printWelcome(string Name){ 
   cout << " Hello " << setw(5) << Name; 
}

int main()
{
string Name;
   cout << "Enter your first name: "; 
   cin >> Name;
   printWelcome(Name); 
   
   int mental;
   
  cout << " On a scale of 1 to 10, How are you feeling today? "<< endl;
  cin >> mental; 
 if ( mental < 4 ) {
   cout << " Oh No! Here are some tips to feel better: " << endl;
 }

   ifstream reader;//looks for text file
    reader.open("file.txt");//opens text file
  
  return 0; 
}
