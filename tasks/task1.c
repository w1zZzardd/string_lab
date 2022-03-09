#include "../string_.h"
#include <ctype.h>


void removeNonLetters(char *s) {
    char *endSource = getEndOfString(s);
    char *destination = copyIf(s, endSource, s, isgraph);
    *destination = '\0';
}

void test_removeNonLetters_NoSpacesBetweenCharacter() {
    char s[] = "Hi123";
    removeNonLetters(s);
    ASSERT_STRING("Hi123", s);
}

int task1 () {
    void test_removeNonLetters_NoSpacesBetweenCharacter();
}

