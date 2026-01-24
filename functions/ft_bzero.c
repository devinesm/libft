#include "libft.h"

void ft_bzero(void *str, size_t length)
{
    ft_memset(str, 0, length);
}