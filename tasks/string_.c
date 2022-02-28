#include <stdio.h>
#include "string_.h"
#include <assert.h>
#include <ctype.h>

size_t strlen_(const char *begin) {
    char *end = begin;
    while (*end != '\0')
        end++;
    return end - begin;
}

char *find(char *begin, char *end, int ch) {
    while (begin != end && *begin != ch)
        begin++;

    return begin;
}

void emptyStringError(char *begin) {
    if (*begin == '\0') {
        fprintf(stderr, "Empty string");
        exit(1);
    }
}

char* findNonSpace(char *begin) {
    while (*begin != '\0') {
        if (!isspace(*begin))
            return begin;

        begin++;
    }
    return begin;
}

char* findSpace(char *begin) {
    while (*begin != '\0') {
        if (isspace(*begin))
            return begin;

        begin++;
    }
    return begin;
}
