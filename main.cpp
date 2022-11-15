// A basic C++ program illustrating input, output, function parameters.
#include <iostream>
using namespace std;  // With this we don't need to preface cin and cout with std::

// Function to illustrate a reference parameter, where the change in value
// is reflected back to the calling code.  Only the change to variable 
// ageNextYear is reflected back.
void calculateAgeNextYear( int &ageNextYear, int increment)
{
    ageNextYear = ageNextYear + increment;
    increment++;  // Change this variable too, to show it's value is not reflected back.
}


int main() {
    int age;               // Declare an integer variable
    float salary = 14.3;  // Declare and initialize a float variable  
    char initials[] = {'D','F','R'};      // Declare and initialize an array of char
    // Declare and initialize an array of 4 rows and 3 columns
    int values[ 4][ 3] = { {1,3,2},
                           {2,4,1},
                           {3,2,4},
                           {4,1,3} };

    // Display the contents of an array.  Note how array counter declaration 
    // is built-in.
    cout << "Initials are: ";
    for( int i=0; i<3; i++) {
        cout << initials[ i];
    }
    cout << endl;    // New line
    
    cout << "Enter age and salary: ";
    cin >> age >> salary;
    cout << "Age is " << age << " and salary is " << salary << "\n";

    int increment = 10;   // See what happens if this is not initialized 
    calculateAgeNextYear( age, increment);    // Illustrate a reference parameter

    cout << "In " << increment << " years you will be " << age << endl;
    
    return 0;    // Keep C++ happy.  Compiler dependent)
}

/* Running the program looks like:
    Initials are: DFR
    Enter age and salary: 58 15.60
    Age is 58 and salary is 15.6
    In 10 years you will be 68

When variable increment is not initialized, running the program in Replit looks like:
    Initials are: DFR
    Enter age and salary: 25 16.45
    Age is 25 and salary is 16.45
    In 28233 years you will be 25
 */