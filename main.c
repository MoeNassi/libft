#include "libft.h"
#include <stdio.h>

int main()
{
    char s[] = "Hello";
    char p[] = "World";
    ft_strlcat(s, p, 5);
    printf("%s\n", s);
}