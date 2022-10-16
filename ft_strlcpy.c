/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:27:06 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/16 14:28:22 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*s;

	s = (unsigned char *)src;
	j = (int)n;
	i = 0;
	while (src[i] != '\0' && i < n -1)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (n);
}
