/**
 * Determines if an integer is positive or negative.
 *
 * @param n The integer to be evaluated.
 *
 * @returns None
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout<<"value of n is " << n <<endl;

    if (n > 0)
    {
        cout << "B is positive" << endl;
    }
    else
    {
        cout << "B is negative " << endl;
    }
}