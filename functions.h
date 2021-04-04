/* A header file to hold the 
main defintions of the program
Student: Ronald Angora
Teacher: Dr_T
Date: 04-02-2021
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
//put libraries here
#include <iostream>
#include <string>
#include <iomanip>
#include "Input_Validation_Extended.h" 
using namespace std;

// Function to display the menu
void menu()
{
  cout << "___________Physics Calculator___________\n";
  cout << "\nEnter 1-6 to select a formula or E to exit\n";
  cout << "1. Calculate Velocity\n";
  cout << "2. Calculate Acceleration\n";
  cout << "3. Calculate Motion\n";
  cout << "4. Calculate Newtons 2nd Law\n";
  cout << "5. Calculate Weight\n";
  cout << "6. Calculate Momentum\n";
  cout << "Press E or e to exit\n";
}

// Function to display the submenu
void subMenu()
{
  cout << "\nWhat do you want to solve for?\n";
  cout << "1. Solve for Ma\n";
  cout << "2. Solve for Ms\n";
  cout << "3. Solve for Mv2\n";
  cout << "4. Solve for Mv\n";
  cout << "Press E or e to go back to main menu\n";
}

// Function to calculate and display the results
void handleOption(string userOption)
{
 if (userOption == "1")
 {
    // Initialize variables
    double ds = 0.00;
    string dsUnits;
    double dt = 0.00;
    string dtUnits;
    
     // Display/Calculate formula and accept user input
      cout << "Velocity (v = ds / dt)\n";
      cout << "Enter ds:\n";
      cin >> ds;
      cout << "Enter ds unit of measure:\n";
      cin >> dsUnits;
      cout << "Enter dt:\n";
      cin >> dt;
      cout << "Enter dt unit of measure:\n";
      cin >> dtUnits;
      cout << fixed << setprecision(4) << "v = " << ds << " " << dsUnits << " / " << dt << " " << dtUnits << endl;
      cout << fixed << setprecision(4) << "v = " << ds/dt << " " << dsUnits << " / " << dtUnits << endl;
  }
  else if (userOption == "2")
  {
    // Initialize variables
    double dv = 0.00;
    string dvUnits;
    double dt = 0.00;
    string dtUnits;

      //Display/Calculate formula and accept user input
      cout << "Acceleration (a = dv / dt)\n";
      cout << "Enter dv:\n";
      cin >> dv;
      cout << "Enter dv unit of measure:\n";
      cin >> dvUnits;
      cout << "Enter dt:\n";
      cin >> dt;
      cout << "Enter dt unit of measure:\n";
      cin >> dtUnits;
      cout << fixed << setprecision(4) << "a = " << dv << " " << dvUnits << " / " << dt << " " << dtUnits << endl;
      cout << fixed << setprecision(4) << "a = " << dv/dt << " " << dvUnits << " / " << dtUnits << endl;
  } 
  else if (userOption == "3")
  {
    string option = "";
    do
    {
      // Display the subMenu
      subMenu();

      // Enter the userOption
      cout << "\nEnter your option:\n";
      cin >> option;
      cout << "Your choice is " << option << endl;
      if (option == "1")
      {
        // Initialize variables
        double v0 = 0.00;
        string v0Units;
        double at = 0.00;
        string atUnits;
          
          //Display/Calculate formula and accept user input
          cout << "Motion - Solve for v (v = v0 + at)\n";
          cout << "Enter v0:\n";
          cin >> v0;
          cout << "Enter v0 unit of measure:\n";
          cin >> v0Units;
          cout << "Enter at:\n";
          cin >> at;
          cout << "Enter at unit of measure:\n";
          cin >> atUnits;
          cout << fixed << setprecision(4) << "v = " << v0 << " " << v0Units << " + " << at << " " << atUnits << endl;
          cout << fixed << setprecision(4) << "v = " << v0 + at << " " << v0Units << " / " << atUnits << endl;
      }
      else if (option == "2")
      {
        // Initialize variables
        double s0 = 0.00;
        string s0Units;
        double v0t = 0.00;
        string v0tUnits;
        double at = 0.00;
        string atUnits;

          //Display/Calculate formula and accept user input        
          cout << "Motion - Solve for s (s = s0 + v0t + 1/2at^2)\n";
          cout << "Enter s0:\n";
          cin >> s0;
          cout << "Enter s0 unit of measure:\n";
          cin >> s0Units;
          cout << "Enter v0t:\n";
          cin >> v0t;
          cout << "Enter at:\n";
          cin >> at;
          cout << "Enter at unit of measure:\n";
          cin >> atUnits;          
          cout << fixed << setprecision(4) << "s = " << s0 << " " << s0Units << " + " << v0t << " " << v0tUnits << " + " << at << " ^ 2 " << "/2" << endl;
          cout << fixed << setprecision(4) << "s = " << s0 + v0t + at*at / 2 << " " << s0Units << " / " << atUnits << endl;
      }
      else if (option == "3")
      {
        // Initialize variables
        double v0 = 0.00;
        double a = 0.00;
        string aUnits;
        double s = 0.00;
        string sUnits;
        double s0 = 0.00;
        string s0Units;

          //Display/Calculate formula and accept user input
          cout << "Motion - solve for v^2 (v^2 = v0^2 + 2a (s - s0)\n";
          cout << "Enter v0^2:\n";
          cin >> v0;
          cout << "Enter a:\n";
          cin >> a;
          cout << "Enter a unit of measure:\n";
          cin >> aUnits;
          cout << "Enter s:\n";
          cin >> s;
          cout << "Enter s unit of measure:\n";
          cin >> sUnits;
          cout << "Enter s0:\n";
          cin >> s0Units;
          cout << fixed << setprecision(4) << "v^2 = " << v0 << "^2 + " << " 2a " << aUnits << " ( " << s << " - " << s0 << " ) " << endl;
          cout << fixed << setprecision(4) << "v^2 = " << v0*v0 + 2*a * s - s0 << " m/s " << endl;
      }
      else if (option == "4")
      {
        // Initialize variables
        double v = 0.00;
        string vUnits;
        double v0 = 0.00;
        string v0Units;
          
          //Display/Calculate formula and accept user input
          cout << "Motion - solve for v_bar (v_bar = 1/2 (v + v0)\n";
          cout << "Enter v:\n";
          cin >> v;
          cout << "Enter v unit of measure:\n";
          cin >> vUnits;
          cout << "Enter v0:\n";
          cin >> v0;
          cout << "Enter v0 unit of measure:\n";
          cin >> v0Units;
          cout << fixed << setprecision(4) << "v_bar = 1/2 (" << v << " + " << v0 << ") " << endl;
          cout << fixed << setprecision(4) << "v_bar = " << v + v0 / 2 << " " << vUnits << "/" << v0Units << endl;
      }
      else
      {
        cout << "\nInvalid input: try again." << endl; 
      }
    } while (option != "e" && option != "E");
    
  }
  else if (userOption == "4")
  {
    // Initialize variables
    double m = 0.00;
    string mUnits;
    double a = 0.00;
    string aUnits;

      //Display/Calculate formula and accept user input
      cout << "Newton's 2nd law (N = m x a)\n";
      cout << "Enter m:\n";
      cin >> m;
      cout << "Enter m unit of measure:\n";
      cin >> mUnits;
      cout << "Enter a:\n";
      cin >> a;
      cout << "Enter a unit of measure:\n";
      cin >> aUnits;
      cout << fixed << setprecision(4) << "N = " << m << " " << mUnits << " x " << a << " " << aUnits << endl;
      cout << fixed << setprecision(4) << "N = " << m*a << " " << mUnits << "/" << aUnits << endl;
  }
  else if (userOption == "5")
  {
    // Initialize variables
    double m = 0.00;
    string mUnits;
    double g = 0.00;
    string gUnits;

      //Display/Calculate formula and accept user input
      cout << "Weight (W = m x g)\n";
      cout << "Enter m:\n";
      cin >> m;
      cout << "Enter m unit of measure:\n";
      cin >> mUnits;
      cout << "Enter g:\n";
      cin >> g;
      cout << "Enter g unit of measure:\n";
      cin >> gUnits;
      cout << fixed << setprecision(4) << "N = " << m << " " << mUnits << " x " << g << " " << gUnits << endl;
      cout << fixed << setprecision(4) << "N = " << m*g << " " << mUnits << "/" << gUnits << endl;   
  }
  else if (userOption == "6")
  {
    // Initialize variables
    double m = 0.00;
    string mUnits;
    double v = 0.00;
    string vUnits;

      //Display/Calculate formula and accept user input
      cout << "Momentum (P = m x v)\n";
      cout << "Enter m:\n";
      cin >> m;
      cout << "Enter m unit of measure:\n";
      cin >> mUnits;
      cout << "Enter v:\n";
      cin >> v;
      cout << "Enter v unit of measure:\n";
      cin >> vUnits;
      cout << fixed << setprecision(4) << "N = " << m << " " << mUnits << " x " << v << " " << vUnits << endl;
      cout << fixed << setprecision(4) << "N = " << m*v << " " << mUnits << "/" << vUnits << endl;   
  }
  else
  {
    cout << "\nInvalid input: try again." << endl; 
  }
}
#endif