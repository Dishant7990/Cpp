#include <iostream>

using namespace std;

int main(void)
{
    int num1, num2, sum;  // variables for input and sum

    while (1)  // repeat forever
    {
        cout << "Enter number 1: ";
        cin >> num1;

        cout << "Enter number 2: ";
        cin >> num2;

        sum = num1 + num2;

        cout << num1 << " + " << num2 << " = " << sum << "\n";
    }

    return 0;
}
