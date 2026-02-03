#include "libft.h"

int ft_toupper(int argument)
{
    if ((argument >= 'a') && (argument <= 'z'))
        return (argument - 32);

    return (argument);
}