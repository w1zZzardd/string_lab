#include <assert.h>
#include "string_.h"

void test_findNonSpace_NoSymbols() {
    char string[] = "\t \n    \0";
    assert(findNonSpace(string) == string + 7);
}

void test_findNonSpace_firstZero() {
    char string[] = "\0";
    assert(findNonSpace(string) == string);
}

void test_findNonSpace_thirdNonSpace() {
    char string[] = "\t\ng\0";
    assert(findNonSpace(string) == string + 2);
}

void test_findSpace_NoSymbols() {
    char string[] = " \t    \0";
    assert(findSpace(string) == string);
}

void test_findSpace_secondSpace() {
    char string[] = "s s \0";
    assert(findSpace(string) == string + 1);
}

void test_findNonSpaceReverse_firstSpace() {
    char string[] = "\n";
    assert(findNonSpaceReverse(string + (strlen_(string) - 1),
                               string) == string);
}

void test_findNonSpaceReverse_noSpace() {
    char string[] = "ggwp";
    assert(findNonSpaceReverse(string + (strlen_(string) - 1),
                               string) == string + strlen_(string) - 1);
}


void test_findNonSpaceReverse_message() {
    char string[] = "Wassup bro";
    assert(findNonSpaceReverse(string + (strlen_(string) - 1),
                               string) == string + strlen_(string) - 1);
}

void test_findSpaceReverse_noSymbols() {
    char string[] = "\n";
    assert(findSpaceReverse(string + (strlen_(string) - 1), string) == string);
}

void test_findSpaceReverse_noSpace() {
    char string[] = "ggwp";
    assert(findSpaceReverse(string + (strlen_(string) - 1),
                            string) == string);
}

void test_strcmp_A () {
    char string1[] = "aaaaaaa";
    char string2[] = "bbbbbb";
    assert(strcmp(string1, string2) < 0);
}

void test_strcmp_differentStrings () {
    char string1[] = "aaa";
    char string2[] = "BBB";
    assert(strcmp(string1, string2) > 0);
}

void test_strcmp_equalStrings () {
    char string1[] = "A B C d";
    char string2[] = "A B C d";
    assert(strcmp(string1, string2) == 0);
}

void test_findNonSpace() {
    test_findNonSpace_NoSymbols();
    test_findNonSpace_firstZero();
    test_findNonSpace_thirdNonSpace();
}

void test_nonSpaceReverce() {
    test_findNonSpaceReverse_noSpace();
    test_findNonSpaceReverse_firstSpace();
    test_findNonSpaceReverse_message();
}

int main() {
    test_findNonSpace();
    test_findSpace_NoSymbols();
    test_findSpace_secondSpace();
    test_nonSpaceReverce();
    test_findSpaceReverse_noSymbols();
    test_findSpaceReverse_noSpace();
    test_strcmp_A ();
    test_strcmp_differentStrings();
    test_strcmp_equalStrings ();

    return 0;
}
