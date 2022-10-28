/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:19:16 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/28 10:32:15 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static	int	end(char const *s1, char const *set)
{
	int	h;
	int	l;

	h = 0;
	l = ft_strlen(s1) - 1;
	while (l >= 0)
	{
		if (ft_strrchr(set, s1[l]) == 0)
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

	if (set[0] == '\0')
		return ((char *)s1);
	if (s1 == NULL)
		return (0);
	f = start(s1, set);
	b = end(s1, set) - f + 1;
	p = 0;
	if (end(s1, set) == -1)
		return ((char *)&s1[f]);
	s = malloc(b + 1);
	if (!s)
		return (NULL);
	while (s1[f] != '\0' && p < b)
	{
		s[p] = s1[f];
		f++;
		p++;
	}
	s[p] = '\0';
	return (s);
}
