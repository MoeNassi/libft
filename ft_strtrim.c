/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:19:16 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/21 15:09:11 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>

int	start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (strchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	return (i);
}

int	end(char const *s1, char const *set)
{
	int		h;
	int		l;

	h = 0;
	l = ft_strlen(s1) - 1;
	while (h < l)
	{
		if (strrchr(set, s1[l]) == NULL)
			break ;
		l--;
	}
	return (l);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		f;
	int		b;
	int		p;

	if (s1 == NULL || set == NULL)
		return (0);
	f = start(s1, set);
	b = end(s1, set) - f + 1;
	p = 0;
	s = malloc(b + 1);
	if (!s)
		return (NULL);
	while (p < b)
	{
		s[p] = s1[f];
		f++;
		p++;
	}
	s[p] = '\0';
	return (s);
}
