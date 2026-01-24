#include "libft.h"

int ft_isalpha(int argument)
{
        return ((argument >= 'a' && argument <= 'z')
                        || (argument >= 'A' && argument <= 'Z'));
}