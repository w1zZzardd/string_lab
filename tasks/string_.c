#include <stdio.h>
#include "string_.h"
#include <assert.h>
#include <ctype.h>
#include <memory.h>


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

char *findNonSpace(char *begin) {
    while (*begin != '\0') {
        if (!isspace(*begin))
            return begin;

        begin++;
    }
    return begin;
}

char *findSpace(char *begin) {
    while (*begin != '\0') {
        if (isspace(*begin))
            return begin;

        begin++;
    }
    return begin;
}

char *findNonSpaceReverse(char *rbegin, const char *rend) {
    while (isspace(*rbegin) && rbegin < rend) {
        rbegin--;
    }

    return rbegin;
}

char *findSpaceReverse(char *rbegin, const char *rend) {
    while (rbegin != rend && !isspace(*rbegin))
        rbegin--;
    return rbegin;
}

int strcmp(const char *lhs, const char *rhs) {
    while (*lhs == *rhs && *lhs != '\0') {
        lhs++;
        rhs++;
    }
    return *lhs - *rhs;
}

char *copy(const char *beginSource, const char *endSource,
           char *beginDestination) {
    memcpy(beginDestination, beginSource, endSource - beginSource);

    return beginDestination + (endSource - beginSource) + 1;
}

char *copyIfReverse(char *rbeginSource, const char *rendSource,
                    char *beginDestination, int (*f)(int)) {

}