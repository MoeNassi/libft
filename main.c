#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main()
{
    int fd = open("file.txt", O_CREAT | O_RDWR, 0777);
    char *str;

    str = "Hello";
    write(fd, &str, 1);
}