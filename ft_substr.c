/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:00:55 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/19 16:55:14 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*p;
	char		*l;
	size_t		y;

	i = 0;
	p = (char *)s;
	y = ft_strlen(p);
	l = malloc((y + 1) * sizeof(char));
	if (!l)
		return (0);
	while (start <= len)
	{
		ft_memcpy(l, p, len);
		start++;
	}
	l[i] = '\0';
	return (l);
}
