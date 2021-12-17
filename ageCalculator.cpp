/* Name: Jacob Bodera
 * Description: takes in birth date and current date to determine the age of the user
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
int birthDay, birthMonth, birthYear, currentDay, currentMonth,
currentYear, userAge = 0;

// assume that no negative year/month/day is entered
cout << "Enter your birthdate as an integer (year, month, day)" << endl;
cout << "(Example: August 1st 2002 would be entered '2002 8 1')" << endl;
cin >> birthYear >> birthMonth >> birthDay;

cout << "Enter the current date as an integer (year, month day)" << endl;
cin >> currentYear >> currentMonth >> currentDay;

userAge = currentYear - birthYear;

// determines if the birth month or birthday has passed
if(birthMonth > currentMonth || birthMonth == currentMonth &&
birthDay > currentDay)
userAge = currentYear - birthYear - 1;


// determines if the user entered a birthdate in the future
if(currentYear < birthYear || currentYear <= birthYear &&
currentMonth < birthMonth || currentYear <= birthYear &&
currentMonth <= birthMonth &&
currentDay < birthDay)
cout << "You are not born yet!";
else
cout << "Age: " << userAge;

return EXIT_SUCCESS;
}