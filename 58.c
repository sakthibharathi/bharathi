#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_FILENAME_SIZE 256

char *filename(char *s) {
    char *result;
    char *last;
    if ((last = strrchr(str, '.')) != NULL ) {
        if ((*last == '.') && (last == s))
            return s;
        else {
            result = (char*) malloc(MAX_FILENAME_SIZE);
            snprintf(result, sizeof result, "%.*s", (int)(last - s), s);
            return result;
        }
    } else {
        return s;
    }
}

char *extname(char *s) {
    char *result;
    char *last;
    if ((last = strrchr(str, '.')) != NULL) {
        if ((*last == '.') && (last == s))
            return "";
        else {
            result = (char*) malloc(MAX_FILENAME_SIZE);
            snprintf(result, sizeof result, "%s", last + 1);
            return result;
        }
    } else {
        return ""; 
    }
}
