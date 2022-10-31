/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:54:44 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/31 16:10:14 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int		i;
	int	counter;

	counter = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (counter);
}

static void freesplit(char **s, int i)
{
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**mok;
	size_t		i;
	size_t		j;
	int		y;
	int		ct;

	i = 0;
	j = 0;
	y = 0;
	if (!s)
		return (NULL);
	ct = count(s, c);
	mok = (char **)malloc((ct + 1) * sizeof(char *));
	if (!mok)
		return (NULL);
	while (y < ct)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		mok[y] = ft_substr(s, j, i - j);
		if (!mok[y])
			return (freesplit(mok, 0), NULL);
		y++;
	}
	return (mok[y] = NULL, mok);
}
