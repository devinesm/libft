#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t length)
{
    size_t index;

    if (!dest && !src)
        return NULL;

    if (dest < src) {
        index = 0;

        while (index < length) {
            ((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
            index++;
        }
    }
    else {
        index = length;

        while (index > 0) {
            index--;
            ((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
        }
    }

    return dest;
}