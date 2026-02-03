#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t size)
{
    size_t			index;
    unsigned char	*str1;
    unsigned char	*str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    index = 0;
    while (index < size)
    {
        if (str1[index] != str2[index])
            return (str1[index] - str2[index]);
        index++;
    }
    return (0);
}