/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:49:35 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/23 14:57:41 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t	dstsize)
{
	size_t	j;
	int		i;
	size_t	dlen;
	size_t	slen;
	char	*s;

	if (dst == NULL && dstsize == 0)
		return (0);
	s = (char *)src;
	slen = ft_strlen(s);
	dlen = ft_strlen(dst);
	if (dstsize < dlen)
		return (slen + dstsize);
	j = 0;
	i = 0;
	while (dst[i] != '\0')
		i++;
	while (s[j] != '\0' && j < dstsize - dlen - 1)
		dst[i++] = s[j++];
	dst[i] = '\0';
	return (dlen + slen);
}
