#include <stdio.h>
#include <assert.h>
#include "tasks\string_.h"

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

void test_findSpace_NoSymbols (){
    char string[] = " \t    \0";
    assert(findSpace(string) == string);
}

void test_findSpace_secondSpace () {
    char string[] = "s s \0";
    assert(findSpace(string) == string + 1);
}

void test_findNonSpace () {
    test_findNonSpace_NoSymbols();
    test_findNonSpace_firstZero();
    test_findNonSpace_thirdNonSpace();
}

int main() {
    test_findNonSpace();
    test_findSpace_NoSymbols ();
    test_findSpace_secondSpace ();
    

    return 0;
}
