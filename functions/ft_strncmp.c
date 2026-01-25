#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t length)
{
    size_t index;

    index = 0;
    while (index < length)
    {
        if (str1[index] != str2[index])
            return ((unsigned char)str1[index] - (unsigned char)str2[index]);
        
        if (str1[index] || str2[index])
            return 0;

        index++;
    }

    return 0;
}