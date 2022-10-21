/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:49:35 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/21 16:07:16 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t	dstsize)
{
	size_t	j;
	int		i;
	size_t	dlen;
	size_t	slen;

	if ((dst == 0 || src == 0) && dstsize == 0)
		return (0);
	j = 0;
	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dstsize < dlen)
		return (slen + dstsize);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j < dstsize)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dlen + slen);
}
