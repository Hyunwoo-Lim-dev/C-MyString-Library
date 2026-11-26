#include <stdio.h>
#include "my_string.h"

int my_strlen(const char* str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int my_strcmp(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

char* my_strncpy(char* destination, const char* source, int num) {
    int i = 0;
    while (i < num && source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    while (i < num) {
        destination[i] = '\0';
        i++;
    }
    return destination;
}

char* my_strncat(char* destination, const char* source, int num) {
    int dest_len = my_strlen(destination);
    int i = 0;
    while (i < num && source[i] != '\0') {
        destination[dest_len + i] = source[i];
        i++;
    }
    destination[dest_len + i] = '\0';
    return destination;
}

int my_strncmp(const char* str1, const char* str2, int num) {
    int i = 0;
    while (i < num) {
        if (str1[i] != str2[i] || str1[i] == '\0' || str2[i] == '\0') {
            return str1[i] - str2[i];
        }
        i++;
    }
    return 0;
}

char* my_strchr(const char* str, int character) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == (char)character) {
            return (char*)&str[i];
        }
        i++;
    }
    if ((char)character == '\0') {
        return (char*)&str[i];
    }
    return NULL;
}

char* my_strrchr(const char* str, int character) {
    char* last_found = NULL;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == (char)character) {
            last_found = (char*)&str[i];
        }
        i++;
    }
    if ((char)character == '\0') {
        return (char*)&str[i];
    }
    return last_found;
}

char* my_strstr(const char* str1, const char* str2) {
    if (str2[0] == '\0') {
        return (char*)str1;
    }
    for (int i = 0; str1[i] != '\0'; i++) {
        int j = 0;
        while (str1[i + j] != '\0' && str2[j] != '\0' && str1[i + j] == str2[j]) {
            j++;
        }
        if (str2[j] == '\0') {
            return (char*)&str1[i];
        }
    }
    return NULL;
}

int my_strspn(const char* str1, const char* str2) {
    int count = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        int found = 0;
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                found = 1;
                break;
            }
        }
        if (found == 1) {
            count++;
        } else {
            break;
        }
    }
    return count;
}

int my_strcspn(const char* str1, const char* str2) {
    int count = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                return count;
            }
        }
        count++;
    }
    return count;
}
