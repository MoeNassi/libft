/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:00:55 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/16 12:35:20 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*l;
	int		i;

	i = 0;
	p = (char *)s;
	l = malloc(len * sizeof(char));
	while (p[i] != '\0')
	{
		if (p[i] == start)
		{
			while (p[i] != '\0' && i < len)
			{
				l[i] = p[i];
				i++;
			}
		}
		i++;
	}
	return (p);
}
