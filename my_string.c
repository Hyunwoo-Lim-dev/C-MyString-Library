#include <stdio.h>
#include "my_string.h"

int my_strlen(const char* str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}
