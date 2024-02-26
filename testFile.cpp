/* DO NOT MODIFY THIS FILE */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "labFile.hpp"

TEST_CASE("Sum of two integers") {
    REQUIRE(sum(3, 4) == 7);
    REQUIRE(sum(-1, 1) == 0);
    REQUIRE(sum(0, 0) == 0);
}

TEST_CASE("Find grade based on score") {
    REQUIRE(findGrade(85) == 'B');
    REQUIRE(findGrade(95) == 'A');
    REQUIRE(findGrade(75) == 'C');
    REQUIRE(findGrade(65) == 'D');
    REQUIRE(findGrade(55) == 'F');
}

TEST_CASE("Check if character is a vowel") {
    REQUIRE(isVowel('A') == true);
    REQUIRE(isVowel('b') == false);
    REQUIRE(isVowel('e') == true);
    REQUIRE(isVowel('Z') == false);
}

TEST_CASE("Check if year is a leap year") {
    REQUIRE(isLeapYear(2024) == true);
    REQUIRE(isLeapYear(1900) == false);
    REQUIRE(isLeapYear(2000) == true);
    REQUIRE(isLeapYear(2021) == false);
}

TEST_CASE("Find maximum among three numbers") {
    REQUIRE(max(5, 10, 3) == 10);
    REQUIRE(max(10, 3, 5) == 10);
    REQUIRE(max(3, 5, 10) == 10);
    REQUIRE(max(5, 5, 5) == 5);
}