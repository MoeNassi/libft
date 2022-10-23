/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:47:42 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/23 14:12:00 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	diali(const char *haystack, const char *needle)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && *needle != '\0')
	{
		if (*needle != haystack[i])
			return (0);
		i++;
		needle++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	char		*h;
	char		*n;
	size_t		j;

	if (!haystack || !len)
		return (NULL);
	i = 0;
	j = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (*needle == '\0')
		return (h);
	if (needle > haystack)
		return (NULL);
	while (h[i] != '\0' && i < len - 1)
	{
		if (diali(h, n))
			return ((char *)h);
		h++;
		i++;
	}
	return (0);
}

int main()
{
	printf("%s\n", ft_strnstr((void *)0, "fake", 3));
	printf("%s\n", strnstr((void *)0, "fake", 3));
}