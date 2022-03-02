#ifndef STRING_STRING__H
#define STRING_STRING__H

#endif //STRING_STRING__H

size_t strlen_(const char *begin);

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