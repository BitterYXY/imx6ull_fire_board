#ifndef     __STRING_H__
#define     __STRING_H__

#include "alltypes.h"

/**
 * @brief Copy n characters to dest from src.
 * @param dest  the destination address pointer
 * @param src   the source address pointer
 * @param n     the number of bytes to be copied
 * 
 * @return      no return
*/
void *memcpy (void *restrict dest, const void *restrict src, size_t n);

/**
 * @brief Copy n characters to dest from src, but this function is safer than memcpy.
 * @param dest  the destination address pointer
 * @param src   the source address pointer
 * @param n     the number of bytes to be copied
 * 
 * @return      no return
*/
void *memmove (void *dest, const void *src, size_t n);

/**
 * @brief Copy the character c to the first n characters of string pointed by str.
 * @param str   the string address pointer
 * @param c     the character c
 * @param n     the number of bytes to be copied
 * 
 * @return      no return
*/
void *memset (void *str, int c, size_t n);

/**
 * @brief Compare the first n characters in str1 and str2.
 * @param str1  the first string
 * @param str2  the another string
 * @param n     the number of bytes to be compared
 * 
 * @return      <0 means str1 is smaller than str2.
 *              >0 means str1 is larger than str2.
 *              =0 means str1 is equaled to str2.
*/
int memcmp (const void *str1, const void *str2, size_t n);

/**
 * @brief Find the character c (first appear) in the first n characters of str.
 * @param str   the string adderss pointer
 * @param c     the character to look for
 * @param n     the number of characters to be searched in str
 * 
 * @return      NULL - not found the character.
 *              Pointer - the first appeard character pointer
*/
void *memchr (const void *str, int c, size_t n);

/**
 * @brief Copy the string pointed by src to string pointed by dest.
 * @param dest  the destination address pointer
 * @param src   the source address pointer
 *              Note: if the dest space is not enough, it will be overflow.
 * @return      return the dest pointer
*/
char *strcpy (char *restrict dest, const char *restrict src);

/**
 * @brief Copy n characters from src to dest, when the length of src smaller than dest, 
 *        the rest of dest will be set '\0'.
 * @param dest  the destination address pointer
 * @param src   the source address pointer.
 *          Note: if the dest space is not enough, it will be overflow.
 * @return      return the dest pointer
*/
char *strncpy (char *restrict dest, const char *restrict src, size_t n);

/**
 * @brief Appends the string pointed by src to the end of string pointed by dest.
 * @param dest  the destination address pointer
 * @param src   the source address pointer
 * 
 * @return      return the dest pointer
*/
char *strcat (char *restrict dest, const char *restrict src);

/**
 * @brief Appends the first n characters of src to the end of dest.
 * @param dest  the destination address pointer
 * @param src   the source address pointer
 * @param n     the number of characters to be appended
 * 
 * @return      return the des pointer
*/
char *strncat (char *restrict dest, const char *restrict src, size_t n);

/**
 * @brief Compare the str1 and str2 string.
 * @param str1  the first string pointer
 * @param str2  the another string pointer
 * 
 * @return      <0 means str1 is smaller than str2.
 *              >0 means str1 is larger than str2.
 *              =0 means str1 is equaled to str2.
*/
int strcmp (const char *str1, const char *str2);

/**
 * @brief Compare the first n characters in str1 and str2.
 * @param str1  the first string pointer
 * @param str2  the another string pointer
 * @param n     the number of characters to be compared.
 * 
 * @return      <0 means str1 is smaller than str2.
 *              >0 means str1 is larger than str2.
 *              =0 means str1 is equaled to str2.
*/
int strncmp (const char *str1, const char *str2, size_t n);

/**
 * @brief Finds a character in string, and returns the position where the character first appeared.
 * @param str   The string to be searched
 * @param c     The character to look for
 * 
 * @return      NULL - not found the character.
 *              Pointer - the first appeared c pointer.
*/
char *strchr (const char *str, int c);

/**
 * @brief Finds a character in string, and returns the position where the character latest appeared.
 * @param str   The string to be searched
 * @param c     The character to look for
 * 
 * @return      NULL - not found the character.
 *              Pointer - the latest appeared c pointer.
*/
char *strrchr (const char *str, int c);

/**
 * @brief Find out how mang consecutive characters at the beginning of string str1 
 *        that do not contain characters in string str2
 * @param str1  the string to be searched
 * @param str2  the string that contain the characters that want to look for
 * 
 * @return      return the number of consecutive characters at the beginning of string str1 
 *              that do not contain characters in string str2.
*/
size_t strcspn (const char *str1, const char *str2);

/**
 * @brief Find out the index of first characters in string str1 that not contained in string str2.
 * @param str1 the first string
 * @param str2 the another string
 * 
 * @return      the index
*/
size_t strspn (const char *str1, const char *str2);

/**
 * @brief Find out the first characters in string str1 that contained in string str2.
 * @param str1  the first string
 * @param str2  the another string
 * 
 * @return      NULL - not found the character
 *              the pointer - that the first characters in string str1 that contained in string str2.
*/
char *strpbrk (const char *str1, const char *str2);

/**
 * @brief Find the loaction that the string needle firstly appear in the string haystack.
 * @param haystack  the string to be searched
 * @param needle    the little string to look for
 * 
 * @return      NULL - not find string needle in string haystack
 *              the pointer - that the string needle firstly appear in the string haystack.
*/
char *strstr (const char *haystack, const char *needle);

/**
 * @brief Decompose the string str into a set of strings and delim into delimiters.
 * @param str   the string to be decomposed
 * @param delim the delimiters
*/
char *strtok (char *restrict str, const char *restrict delim);

/**
 * @brief Evaluates the length of string, but not include '\0'.
 * @param str   the string to be evaluated
 * 
 * @return      the length of string.
*/
size_t strlen (const char *str);


//char *strerror (int);


void *__memrchr(const void *, int, size_t);
char *__stpcpy(char *restrict d, const char *restrict s);
char *__stpncpy(char *, const char *, size_t);
char *__strchrnul(const char *s, int c);



#endif
