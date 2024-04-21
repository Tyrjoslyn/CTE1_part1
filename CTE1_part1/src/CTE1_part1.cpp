/*CTE1 Part 1
  1. Create Variables
  	  a.firstName
  	  b.lastName
  	  c.streetAddress
  	  d.city
  	  e.zip code
   2. Prompt user for information
   3. Print USer information*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variables
    string firstName, lastName, streetAddress, city, zipCode;

    // Get User Info
    cout << "Enter First Name: ";
    getline(cin, firstName);

    cout << "Enter Last Name: ";
    getline(cin, lastName);

    cout << "Enter Street Address: ";
    getline(cin, streetAddress);

    cout << "Enter City: ";
    getline(cin, city);

    cout << "Enter Zip Code: ";
    getline(cin, zipCode);

    // Print Info
    cout << "\nCollected Information:\n";
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    return 0;
}
