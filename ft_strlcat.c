/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:49:35 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/16 14:28:10 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t	dstsize)
{
	int		j;
	int		i;
	size_t	dlen;
	size_t	slen;

	j = 0;
	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dstsize < dlen)
		return (dlen + dstsize);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j < dstsize - dlen - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dlen + slen);
}
