#include <fstream> //file stream
#include <string> //creates string variables
#include <iostream> //input-output stream
#include <iomanip> //lets you use setw
using namespace std; //uses cout throughout program
//cout means counsle out
//cin means console in
//endl means end line

#include <fstream>
#include <string> 
#include <iostream> 
#include <iomanip> 
using namespace std; 

void printWelcome(string Name){ 
   cout << " Hello " << setw(3) << Name; 
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
 if ( mental <= 4  ) {
   cout << "Oh No! Here are some things I do to feel better: " << endl;
   ifstream reader;//looks for text file
    reader.open("health.txt");//opens text file
    string word;
    string word2;
    string word3;
    string word4;
    string word5;
    string word6;
    string word7;
    string word8;
    string word9;
    string word10;
    string word11;
    string word12;
    string word13;
 reader >> word >> word2 >> word3 >> word4 >> word5 >> word6 >> word7 >> word8 >> word9 >> word10 >> word11 >> word12 >> word13;
 reader >> word >> word2 >> word3 >> word4 >> word5 >> word6 >> word7 >> word8 >> word9 >> word10 >> word11 >> word12 >> word13;
 std::cout << word << setw(3) << word2 << setw(7) << word3 << std::endl;
 std::cout << word4 << setw(3) << word5 << setw(3) << word6 << setw(7) << word7 << std::endl;  
 std::cout << word8 << setw(7) << word9 << setw(7) << word10 << std::endl;  
 std::cout << word11 << std::endl;  
 std::cout << word12 << std::endl;  
 std::cout << word13 << std::endl; 
std::cout << "Hope This Helps You Have a Better Day! " << std::endl; 
 }

   if ( mental >= 5 && mental <= 7 ) {
   cout << "A calm, decent day I see. Hope things go your way today! " << endl;
  }
  
  if ( mental >= 8 ) {
   cout << " WOAH! save some joy for the rest of us will ya! Glad you're having a good day!" << endl;
  }
  
  
  return 0; 
}
