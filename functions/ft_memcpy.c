void *ft_memcpy(void *dest, const void *src, size_t length)
{
    size_t index;
    
    if (!dest && !src)
        return NULL;

    index = 0;
    while (index < length)
    {
        ((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
        index++;
    }

    return dest;
}