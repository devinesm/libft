#include "libft.h"

void *ft_memset(void *str, int value, size_t length)
{
    size_t index;

    index = 0;
    while (index < length)
    {
        ((unsigned char *)str)[index] = (unsigned char)value;
        index++;
    }

    return str;
}