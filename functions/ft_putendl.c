#include "libft.h"

void ft_putendl(char *s)
{
    if (!s)
        return;
    ft_putstr_fd(s, 1);
    ft_putchar_fd('\n', 1);
}