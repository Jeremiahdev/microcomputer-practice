// study2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "stdio.h"
#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{
    char c1;
    unsigned char uc1;
    short int i1;

    // Data type char
    cout << "The minimum value of a char is" << CHAR_MIN << endl;
    cout << "The maximum value of a char is" << CHAR_MAX << endl;
    cout << "The storage size in byte(s) of a char is " << sizeof(c1) << endl; //this function is going to tell us the size in bytes c1 is taking

    cout << "Input a hexadecimal number in the data type of char, for example 8a" << endl;
    scanf_s("%x", &c1);
    //bitset displays the numbner of bits in 8*sizeof(c1) its in 8 bits
    bitset< 8 * sizeof(c1)> charBits(c1); // this is the function to display the number of bits
    cout << "The converted binary value is " << charBits << endl;
    printf("The converted decimal value is %i\n", c1);
    printf("------------------------------------------------");

    //Data type unsigned char
    cout << "The maximum value of a signed char is" << UCHAR_MAX << endl;
    cout << "The storage size in byte(s) of unsigned char is" << sizeof(uc1) << endl;

    cout << "Input a hexadecimal number in the data type of unsigned char, for example 8a" << endl;
    scanf_s("%x", &uc1);

    //bitset stores the number of bits in 8*sizeof(uc1)
    bitset< 8 * sizeof(c1)> ucharBits(c1); // this is the function to display the number of bits
    cout << "The converted binary value is " << ucharBits << endl;
    printf("The converted decimal value is %i\n", uc1);
    printf("--------------------------------------------------");

    
    //Data type of short int
    cout << "The maximum value of a short int is" << SHRT_MAX << endl;
    cout << "The minimum value of a char is " << SHRT_MIN << endl;
    cout << "The storage size in byte(s) of short int is" << sizeof(i1) << endl; 

    cout << "Input a hexadecimal number in the data type of short int, for example 8a" << endl;
    scanf_s("%x", &i1);

    //Bitset displays the number of bits in 8sizeof(i1) in 8bits, there also 16 bits and 32 bits
    bitset < 8 * sizeof(i1)> shortBits(i1); //This is the funtion to display the number of bits
    cout << "The converted binary value is " << shortBits << endl;
    printf("The converted decimal value is %i\n", i1);
    printf("------------------------------------------------------");
    
    system("pause");
    exit(0);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
