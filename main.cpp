#include <iostream>
using namespace std;

// Function to display the menu
void menu()
{
  cout << "***Physics Calculator***\n";
  cout << "Enter 1-6 to select formula or E to exit\n";
  cout << "1. Calculate Velocity\n";
  cout << "2. Calculate Acceleration\n";
  cout << "3. Calculate Motion\n";
  cout << "4. Calculate Newtons 2nd Law\n";
  cout << "5. Calculate Weight\n";
  cout << "6. Calculate Momentum\n";
  cout << "Press E or e to exit\n";
}

// Function to display the submenu
void submenu()
{
  cout << "What do you want to solve for?\n";
  cout << "1. Solve for Ma\n";
  cout << "2. Solve for Ms\n";
  cout << "3. Solve for Mv2\n";
  cout << "4. Solve for Mv\n";
  cout << "5. Go back to Main Menu\n";
}

// Function to calculate and display the results
void result(int choice)
{
  switch (choice) {
  case 1: {
  // Initialize variables
  double ds;
  string dsUnits;
  double dt;
  string dtUnits;
    cout << "Velocity (v = ds/dt)\n";
    cout << "Enter ds:\n";
    cin >> ds;
    cout << "Enter ds unit of measure:\n";
    cin >> dsUnits;
    cout << "Enter dt:\n";
    cin >> dt;
    cout << "Enter dt unit of measure:\n";
    cin >> dtUnits;
    cout << "v = " << ds << dsUnits << "/" << dt << dtUnits << endl;
    cout << "v = " << ds/dt << dsUnits << "/" << dtUnits << endl;
  break;
  }
  case 2: {
   
  }
  case 3: {
   
  }
  case 4: {
   
  }
  case 5: {
   
  }
  case 6: {
   
  }
  }
}
int main() 
{
  // Initialize variables
  int choice, res;

  // Display the Menu
  menu();

  // Enter the choice
  cout << "\nEnter your choice:\n";
  cin >> choice;
  cout << "Your choice is " << choice << endl;

  //Display the result
  result(choice);

  return 0;
}