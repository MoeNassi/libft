/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:54:44 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/27 18:59:52 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int		i;
	int		counter;

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

char	**ft_split(char const *s, char c)
{
	char	**alloc;
	int		i;
	int		j;
	int		y;

	i = 0;
	j = 0;
	y = 0;
	if (!s)
		return (NULL);
	alloc = malloc(count(s, c) * (sizeof(char **) + 1));
	if (!alloc)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		j = i;
		while (s[j] != '\0' && s[j] != c)
			j++;
		alloc[y] = ft_substr(s, i, j - i);
		i++;
	}
	return (alloc);
}

int	main(void)
{
	char s[] = "....HAH....HAH....HAH";
	printf("%d\n", count(s, '.'));
}
