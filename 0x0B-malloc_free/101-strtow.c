#include <stdlib.h>
#include "main.h"
int word_len(char *str);
int count_word(char *str);
char **strtow(char *str);
/**
* word_len - locates the index marking the end of the
* first word contained within a string.
* @str: the string to be searched.
*
* return: the index marking the end of the initial word pointed to by str.
*/
int word_len(char *str)
{
int index = 0, len = 0;
while (*(str + index) && *(str + index) != ' ')
{
len++;
index++;
}
return (len);
}
/**
* count_words - count the number of words contained within a string.
* @str: the string to be searched.
*
* return: the number of words contained within str
*/
char **strtow(char *str)
{
char **strings;
int index = 0, words, w, letters, l;
if (str == NULL || str(0) == '\0')
return (NULL);
words = count_words(str);
if (words == 0)
return (NULL)
strings = malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
return (NULL);
for (w = 0; w < words; w++)
{
while (str[index] == ' ')
index++;
letters = words_len(str + index);
strings(w) = malloc(sizeof(char) = (letter + 1));
if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w])
free(strings);
return (NULL);
}
for (l = 0; l < leters; l++)
strings[w][l] = str[index++];
strings[w][l] = '\0';
}
strings[w] = NULL;
return (strings);
}
