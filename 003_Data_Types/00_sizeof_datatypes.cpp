#include <iostream>
using namespace std;

int main() {
    // Integer types
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of long long int: " << sizeof(long long int) << " bytes" << endl << endl;

    // Unsigned integer types
    cout << "Size of unsigned short int: " << sizeof(unsigned short int) << " bytes" << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Size of unsigned long int: " << sizeof(unsigned long int) << " bytes" << endl;
    cout << "Size of unsigned long long int: " << sizeof(unsigned long long int) << " bytes" << endl << endl;

    // Floating point types
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl << endl;

    // Character types
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of unsigned char: " << sizeof(unsigned char) << " byte" << endl;
    cout << "Size of signed char: " << sizeof(signed char) << " byte" << endl << endl;

    // Boolean type
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl << endl;

    // Wide character types
    cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << endl;
    cout << "Size of char16_t: " << sizeof(char16_t) << " bytes" << endl;
    cout << "Size of char32_t: " << sizeof(char32_t) << " bytes" << endl << endl;

    return 0;
}
