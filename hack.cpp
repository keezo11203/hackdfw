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
   cout << " Oh No! Here are some things I do to feel better: " << endl;
 }

   ifstream reader;//looks for text file
    reader.open("file.txt");//opens text file
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
 std::cout << word << std::endl;
 std::cout << word2 << std::endl;
 std::cout << word3 << std::endl;
 std::cout << word4 << std::endl;
 std::cout << word5 << std::endl;  
 std::cout << word6 << std::endl;  
 std::cout << word7 << std::endl;  
 std::cout << word8 << std::endl;  
 std::cout << word9 << std::endl;  
 std::cout << word10 << std::endl;  
 std::cout << word11 << std::endl;  
 std::cout << word12 << std::endl;  
 std::cout << word13 << std::endl; 
   
   
  return 0; 
}
