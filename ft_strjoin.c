/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:38:36 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/20 08:58:06 by mnassi           ###   ########.fr       */
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

	p = (char *)s1;
	slenght = ft_strlen(s2);
	flenght = ft_strlcat(p, s2, slenght);
	u = flenght;
	l = malloc(flenght * sizeof(char) + 1);
	if (!l)
		return (NULL);
	while (u > 0)
	{
		l[u] = p[u];
		u--;
	}
	l[0] = p[0];
	return (l);
}
