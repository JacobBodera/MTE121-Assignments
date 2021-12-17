/* Name: Jacob Bodera
 * Description: converts nautical miles to kilometers and cable lengths
*/

#include <iostream>

using namespace std;

 int main()
 {
 // creates variable for miles to km conversion
 const double MILES_TO_KM = 1.852;

 cout << "How many nautical miles? " << endl;
double miles = 0; // asks the user to enter the number of nautical miles
cin >> miles; // gets an input from the user

cout << miles << " nautical miles is equal to " << miles * MILES_TO_KM << " kms." << endl; // output of nautical miles to kms
cout << miles << " nautical miles is equal to " << miles/10 << " cables lengths."; // output of nautical miles to cable lengths

return 0;
}
