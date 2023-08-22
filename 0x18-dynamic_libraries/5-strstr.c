#include "main.h"
#include <string.h>
/**
 * _strstr - locate for first location in haystack
 * @haystack: what wr will search on
 * @needle: what we search for
 * Return: pointer with occurence
 */
char *_strstr(char *haystack, char *needle)
{
char *ptr;
ptr = strstr(haystack, needle);
return (ptr);
}
