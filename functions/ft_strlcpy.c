#include "libft.h"

size_t strlcpy(char *dest, const char *src, size_t size)
{
    size_t index;
    size_t src_length;
    
    src_length = ft_strlen(src);
    index = 0;

    if (size == 0)
        return src_length;

    while (src[index] && index < size - 1) {
        dest[index] = src[index];
        index++;
    }

    dest[index] = '\0';
    return src_length;
}