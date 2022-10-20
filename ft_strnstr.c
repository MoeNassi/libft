/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:47:42 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/19 11:04:54 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	char		*h;
	char		*n;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (n[i] == '\0')
		return (&h[i]);
	while (i < len)
	{
		if (*n == h[i])
			return (&h[i]);
		i++;
	}
	return (0);
}
