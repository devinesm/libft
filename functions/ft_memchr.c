#include "libft.h"

void *ft_memchr(const void *ptr, int value, size_t length)
{
    size_t index;
    unsigned char *byte_ptr;
    unsigned char byte_value;

    byte_ptr = (unsigned char *)ptr;
    byte_value = (unsigned char)value;
    index = 0;

    while (index < length)
    {
        if (byte_ptr[index] == byte_value)
        {
            return (void *)&byte_ptr[index];
        }
        index++;
    }

    return NULL;
}