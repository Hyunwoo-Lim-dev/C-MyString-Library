#ifndef MY_STRING_H
#define MY_STRING_H

char* my_strncpy(char* destination, const char* source, int num);
char* my_strncat(char* destination, const char* source, int num);
int my_strcmp(const char* str1, const char* str2);
int my_strncmp(const char* str1, const char* str2, int num);
char* my_strchr(const char* str, int character);
char* my_strrchr(const char* str, int character);
char* my_strstr(const char* str1, const char* str2);
int my_strspn(const char* str1, const char* str2);
int my_strcspn(const char* str1, const char* str2);
int my_strlen(const char* str);

#endif
