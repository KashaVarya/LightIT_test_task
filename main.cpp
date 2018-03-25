#include <iostream>
#include "numconvert.h"
using namespace std;

int main()
{
    cout << "========================================================================================\n"
         << "Program for the translation of Roman numerals into Arabic and Arabic into Roman numerals\n"
         << "========================================================================================\n";


    string num;
    cin >> num;

    // Определение ввода римского/арабского числа
    if(num[0] > 57) {
        cout << fromRoman(num) << "\n";
    }
    else {
        cout << fromArabic(num) << "\n";
    }

    return 0;
}

