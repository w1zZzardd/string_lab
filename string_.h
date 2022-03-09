#ifndef STRING_STRING__H
#define STRING_STRING__H

#include <stdio.h>

#include <assert.h>
#include <ctype.h>
#include <memory.h>

#endif //STRING_STRING__H
#define ASSERT_STRING(expected, got) assertString(expected, got, \
__FILE__ , __FUNCTION__ , __LINE__ )
size_t strlen_(char *begin);

char *find(char *begin, char *end, int ch);

char *findNonSpace(char *begin);

char *findNonSpace(char *begin);

char *findSpace(char *begin);

char *findNonSpaceReverse(char *rbegin, const char *rend);

char *findSpaceReverse(char *rbegin, const char *rend);

int strcmp(const char *lhs, const char *rhs);

char *copy(const char *beginSource, const char *endSource,
           char *beginDestination);

char *copyIfReverse(char *rbeginSource, const char *rendSource,
                    char *beginDestination, int (*f)(int));

char *copyIf(char *beginSource, const char *endSource,
             char *beginDestination, int (*f)(int));

void assertString(const char *expected, char *got,
                  char const *fileName, char const *funcName,
                  int line);

char *getEndOfString(char *s);

