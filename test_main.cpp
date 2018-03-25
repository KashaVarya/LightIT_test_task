#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "numconvert.h"

using namespace std;

TEST_CASE("Roman numerals simple", "[roman_simple]") {
    REQUIRE( fromRoman("I") == 1 );
    REQUIRE( fromRoman("V") == 5 );
    REQUIRE( fromRoman("X") == 10 );
    REQUIRE( fromRoman("L") == 50 );
    REQUIRE( fromRoman("C") == 100 );
    REQUIRE( fromRoman("D") == 500 );
    REQUIRE( fromRoman("M") == 1000 );
}

TEST_CASE("Roman numerals complex", "[roman_complex]") {
    REQUIRE( fromRoman("III") == 3 );
    REQUIRE( fromRoman("IX") == 9 );
    REQUIRE( fromRoman("XIV") == 14 );
    REQUIRE( fromRoman("CMXC") == 990 );
    REQUIRE( fromRoman("MDCCLXXVI") == 1776 );
    REQUIRE( fromRoman("MCMLIV") == 1954 );
}

TEST_CASE("Roman numerals nonstandart", "[roman_nonstd]") {
    REQUIRE( fromRoman("ID") == 499 );
    REQUIRE( fromRoman("IM") == 999 );
}

TEST_CASE("Arabic numerals simple", "[arabic_simple]") {
    REQUIRE( fromArabic("1") == "I" );
    REQUIRE( fromArabic("14") == "XIV" );
    REQUIRE( fromArabic("990") == "CMXC" );
    REQUIRE( fromArabic("1776") == "MDCCLXXVI" );
    REQUIRE( fromArabic("1954") == "MCMLIV" );
}