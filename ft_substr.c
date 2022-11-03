/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:00:55 by mnassi            #+#    #+#             */
/*   Updated: 2022/11/03 10:28:08 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (len > o)
			len = o;
		l = malloc(len + 1);
		if (!l)
			return (NULL);
		while (j < len && start < o && s[start])
		{
			l[j] = s[start];
			j++;
			start++;
		}
		l[j] = '\0';
		return (l);
	}
	return (NULL);
}
