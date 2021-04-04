// Practice with Functions 
// Student: Ronald Angora 
// Teacher: Dr_T
// Date: 04/02/2021
#include "functions.h" //reference the header file 
#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string option = "";
  do
  {
    // Display the Menu
    menu();

    // Enter the userOption
    cout << "\nEnter your option:\n";
    cin >> option;
    cout << "Your choice is " << option << endl;

    //Display the result
    handleOption(option);
  } while (option != "e" && option != "E");
  cout << "Goodbye loser\n";
  return 0;
}