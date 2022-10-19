/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:47:42 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/18 18:54:20 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		j;
	size_t		i;
	char		*h;
	char		*n;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (n[j] == '\0')
		return (h);
	while (i < len)
	{
		if (n[j] == h[i])
			return (n);
		i++;
	}
	if (*n != h[i])
		return (0);
}
