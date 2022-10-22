/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:49:35 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/21 17:57:24 by mnassi           ###   ########.fr       */
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

	s = (char *)src;
	if (dst == 0  && dstsize == 0)
		return (0);
	j = 0;
	i = 0;
	slen = ft_strlen(s);
	dlen = ft_strlen(dst);
	if (dstsize <= dlen)
		return (slen + dstsize);
	while (dst[i] != '\0')
		i++;
	while (s[j] != '\0' && j < dstsize - dlen - 1)
		dst[i++] = s[j++];
	dst[i] = '\0';
	return (dlen + slen);
}

// int main()
// {
// 	char s[] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char p[] = there is no stars in the sky"
// }