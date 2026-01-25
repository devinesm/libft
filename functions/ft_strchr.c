#include "libft.h"

char *ft_strchr(const char *str, int character)
{
    size_t index;

    index = 0;
    while (str[index]) 
    {
        if (str[index] == (char) character) {
            return (char *)&str[index];
        }

        index++;
    }

    if ((char) character == '\0') {
        return (char *)&str[index];
    }

    return NULL;
}