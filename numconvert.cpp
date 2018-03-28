#include "numconvert.h"

// Функция перевода римских чисел в арабские
int fromRoman(string num) {
    // Инициализация начальных данных
    map<char,int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int num_int = 0,
        num_int_pr = 0,
        ans = 0;

    // Функция перевода, поэлементно берет цифру и записывает арабский аналог,в случае значения состоящего из двух элементов (4, 9, 40 и т.п.) заменяет на новое
    for(auto c: num) {
        num_int = roman[c];

        if(num_int_pr < num_int) {
            ans += num_int - 2 * num_int_pr;
        }
        else {
            ans += num_int;
        }

        num_int_pr = num_int;
    }

    return ans;
}

// Функция перевода арабских чисел в римские
string fromArabic(string num) {
    // Инициализация начальных данных
    map<int, string> arabic = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}
    };

    int ar_num = stoi(num);
    string ans;
    auto it = arabic.rbegin();

    // Функция перевода, начинает записывать римское число с тысяч, доходя до единиц
    while(ar_num) {
        if(ar_num >= it -> first) {
            ans += it -> second;
            ar_num -= it -> first;
        }
        else {
            it++;
        }
    }

    return ans;
}
