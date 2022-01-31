#ifndef FT_STRING_H
#define FT_STRING_H

#include <stdlib.h>

/* ft_atoi.c */
int ft_atoi(const char *str);
/* ft_isalnum.c */
int ft_isalnum(int c);
/* ft_isalpha.c */
int ft_isalpha(int c);
/* ft_isascii.c */
int ft_isascii(int c);
/* ft_isdigit.c */
int ft_isdigit(int c);
/* ft_islower.c */
int ft_islower(int c);
/* ft_isprint.c */
int ft_isprint(int c);
/* ft_isspace.c */
int ft_isspace(char c);
/* ft_isupper.c */
int ft_isupper(int c);
/* ft_itoa.c */
char *ft_itoa(int n);
/* ft_split.c */
char **ft_split(char const *s, char c);
/* ft_strchr.c */
char *ft_strchr(const char *s, int c);
/* ft_strcmp.c */
int ft_strcmp(const char *s1, const char *s2);
/* ft_strdup.c */
char *ft_strdup(const char *s1);
/* ft_striteri.c */
void ft_striteri(char *s, void (*f)(unsigned int, char *));
/* ft_strjoin.c */
char *ft_strjoin(char const *s1, char const *s2);
/* ft_strlcat.c */
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
/* ft_strlcpy.c */
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
/* ft_strlen.c */
size_t ft_strlen(const char *s);
/* ft_strmapi.c */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
/* ft_strncmp.c */
int ft_strncmp(const char *s1, const char *s2, size_t n);
/* ft_strnstr.c */
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
/* ft_strrchr.c */
char *ft_strrchr(const char *s, int c);
/* ft_strstr.c */
char *strstr(const char *haystack, const char *needle);
/* ft_strtrim.c */
char *ft_strtrim(char const *s1, char const *set);
/* ft_substr.c */
char *ft_substr(char const *s, unsigned int start, size_t len);
/* ft_tolower.c */
int ft_tolower(int c);
/* ft_toupper.c */
int ft_toupper(int c);

#endif