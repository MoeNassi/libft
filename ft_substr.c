/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:00:55 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/22 17:46:39 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*l;
	size_t	o;

	j = 0;
	if (s)
	{
		o = ft_strlen(s);
		l = malloc(len * sizeof(char) + 1);
		if (!l)
			return (0);
		if (start >= o)
			return (l);
		while (j < len && start < o)
		{
			l[j] = s[start];
			j++;
			start++;
		}
		l[j] = '\0';
		return (l);
	}
	return (0);
}
