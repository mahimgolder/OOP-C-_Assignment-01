// Prob:2. Check if the sum is an even number or odd number.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "Sum = " << sum << endl;

    if (sum % 2 == 0)
    {
        cout << "The sum is Even." << endl;
    }
    else
    {
        cout << "The sum is Odd." << endl;
    }

    return 0;
}