#include "numconvert.h"

int fromRoman(string num) {
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

    for(unsigned int i = 0; i < num.size(); i++) {
        num_int = roman[num[i]];

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

string fromArabic(string num) {

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
    string ans = "";
    map<int, string>::reverse_iterator it = arabic.rbegin();

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
