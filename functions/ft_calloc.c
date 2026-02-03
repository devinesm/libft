#include "libft.h"

void *ft_calloc(size_t len, size_t size)
{
    size_t total_size;
    void *memory;

    total_size = len * size;
    memory = malloc(total_size);
    if (memory == NULL)
        return NULL;

    ft_bzero(memory, total_size);
    return memory;
}