#include "libft.h"

char *ft_strrchr(const char *str, int character)
{
    size_t index;

    index = ft_strlen(str);
    while (index > 0)
    {
        if (str[index] == (char) character)
        {
            return (char *)&str[index];
        }
        index--;
    }

    if ((char) character == str[0])
    {
        return (char *)&str[0];
    }

    return NULL;
}