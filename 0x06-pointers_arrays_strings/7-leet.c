#include "main.h"
#include <string.h>
/**
 * leet - encode function
 * @s: string
 * Return: return new string
 */
char *leet(char *s)
{
    char *result = s;
    char *leet_map[256] = {0};
    leet_map['a'] = leet_map['A'] = "4";
    leet_map['e'] = leet_map['E'] = "3";
    leet_map['o'] = leet_map['O'] = "0";
    leet_map['t'] = leet_map['T'] = "7";
    leet_map['l'] = leet_map['L'] = "1";
    
    for (; *s; ++s) {
        char *leet_char = leet_map[*s];
        if (leet_char != NULL) {
            for (; *leet_char; ++leet_char, ++result) {
                *result = *leet_char;
            }
        } else {
            *(result++) = *s;
        }
    }
    *result = '\0';
    return result;
}

