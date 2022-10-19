/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:27:06 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/19 08:45:04 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t			i;
	size_t			slen;
	char			*s;

	s = (char *)src;
	slen = ft_strlen(s);
	i = 0;
	if (n == 0)
		return (slen);
	while (s[i] != '\0' && i < n - 1)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}
