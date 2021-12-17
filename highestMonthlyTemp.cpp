/* Name: Jacob Bodera
 * Description: given an input file with a list of temperature for a certain month, outputs the maximum
 * temperature that occurred in that month
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
ifstream fileIn("August_2020.txt");

// checks if file is found and if not the program is ended
if(!fileIn)
{
cout << "FILE WAS NOT FOUND!";
return EXIT_FAILURE;
}

// assume the data in the file is degrees Celsius
// and that the temperatures are greater than absolute zero

const int START_DAY = 1, END_DAY = 31;
const int TEMP_HIGH = -273;

double tempHigh = TEMP_HIGH;

// checks each entry in the file to see which is the largest
for(int day = START_DAY; day <= END_DAY; day++)
{
double inputTemp = 0;
fileIn >> inputTemp;

if(inputTemp > tempHigh)
tempHigh = inputTemp;
}

cout << "The highest temperature in August is " << tempHigh << " degress Celsius." << endl;

fileIn.close();

return EXIT_SUCCESS;
}