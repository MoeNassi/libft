/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:38:36 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/21 16:02:24 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*l;
	int			u;
	int			j;
	int			slenght;
	int			flenght;

	slenght = ft_strlen(s1);
	flenght = ft_strlen(s2);
	u = 0;
	j = 0;
	l = malloc((flenght + slenght + 1) * sizeof(char));
	if (!l)
		return (NULL);
	while (s1[u])
	{
		l[u] = s1[u];
			u++;
	}
	while (s2[j])
		l[u++] = s2[j++];
	l[u] = '\0';
	return (l);
}
