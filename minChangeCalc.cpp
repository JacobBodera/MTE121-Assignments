/* Name: Jacob Bodera
 * Description: given and amount of money under $10.00, outputs the minimum number of coins to give that amount in change
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
int amountDollars, amountCents, coinCounter = 0;

// assume that amount is less than $10.00
cout << "Please enter an amount of dollars: " << endl;
cin >> amountDollars;
cout << "Please enter an amount of cents: " << endl;
cin >> amountCents;

// determines whether cents need to be round to next dollar
if(amountCents >= 98)
{
amountDollars = amountDollars + 1;
amountCents = 1;
}

coinCounter = amountDollars/2;
amountDollars = amountDollars % 2;
coinCounter = coinCounter + amountDollars;

// determine whether cents need to be round up or down
if((amountCents % 5) != 0 && (amountCents % 5) >= 3)
amountCents = amountCents + (5 - (amountCents % 5));
else if((amountCents % 5) != 0 && (amountCents % 5) < 3)
amountCents = amountCents - (amountCents % 5);

coinCounter = coinCounter + amountCents/25;
amountCents = amountCents % 25;
coinCounter = coinCounter + amountCents/10;
amountCents = amountCents % 10;
coinCounter = coinCounter + amountCents/5;

cout << "Minimum amount of coins needed is: " << coinCounter;

return EXIT_SUCCESS;
}

