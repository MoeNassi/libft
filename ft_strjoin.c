/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:38:36 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/16 17:05:06 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*l;
	int			u;
	char		*p;
	int			slenght;
	int			flenght;

	u = 0;
	p = (char *)s1;
	slenght = ft_strlen(s2);
	flenght = ft_strlcat(p, s2, slenght);
	l = malloc(flenght * sizeof(char) + 1);
	if (!l)
		return (NULL);
	while (u < flenght)
	{
		l[u] = s1[u];
		u++;
	}
	l[u] = '\0';
	return (l);
}
