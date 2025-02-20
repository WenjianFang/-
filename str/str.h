/*
 * str.h
 *
 *  Created on: Aug 16, 2016
 *      Author: wenjian
 */

#ifndef STR_H_
#define STR_H_

/*converts a byte string to a floating point value,
 * double atof(const char* str);
 * float strtof(const char *restrict str, char **restrict str_end);
 * in the library
 */
double str_atof(const char* str);

/*converts a byte string to an integer value,
 *int atoi(const char *str );
 *long trtol(const char *str, char **str_end, int base );
 *in the library
 */
int str_atoi(const char* str);
/*
 * converts an integer value to a string
 * char* itoa(int value);
 */
void str_itoa(int value, char* str);
/*
 * converts a float to a string
 * char* itof(double value)
 */
void str_itof(double value, char* str);
/*copies one string to another
 * char *strcpy( char *dest, const char *src );
 */
void str_strcpy(char* dest, const char* src);
/*
 * copies a certain amount of characters from one string to another
 * char *strncpy( char *dest, const char *src, size_t count );
 */
void str_strncpy(char* dest, const char* src, const int length);
/*
 * concatenates two strings
 * char *strcat( char *dest, const char *src );
 */

void str_strcat(char* dest, const char* src);
/*
 * concatenates a certain amount of characters of two strings
 * char *strncat( char *dest, const char *src, size_t count );
 */
void str_strncat(char* dest, const char* src, int length);
/*
 * returns the length of a given string
 * size_t strlen( const char *str );
 */
int str_strlen(const char* str);
/*
 * compares two strings, return 0 if equal, else return str1-str2
 * int strcmp( const char *lhs, const char *rhs );
 */
int str_strcmp(const char* str1, const char* str2);
/*
 * compares a certain amount of characters of two strings
 *int strncmp( const char *lhs, const char *rhs, size_t count );
 */
int str_strncmp(const char* str1, const char* str2, int length);
/*
 * finds the first occurrence of a character
 * char *strchr( const char *str, int ch );
 */

/*
 * finds the last occurrence of a character
 * char *strrchr( const char *str, int ch );
 */

/*
 * finds the first occurrence of a substring of characters
 * char *strstr( const char* str, const char* substr );
 */

/*
 * finds the next token in a byte string
 * char *strtok( char *str, const char *delim );
 */
//char* str_strtok(char* str, const char* delim);
/*
 * fills a buffer with a character
 * void *memset( void *dest, int ch, size_t count );
 */
void str_memset(void* dest, int ch, int length);
/*
 * copies one buffer to another
 * void* memcpy( void *dest, const void *src, size_t count );
 */
void str_memcpy(void* dest, const void* src, int length);
/*
 * moves one buffer to another, it can handle the override memory correct
 * void* memmove( void* dest, const void* src, size_t count );
 */
void str_memmove(void* dest, const void*src, int length);
#endif /* STR_H_ */
