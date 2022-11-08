/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:17:51 by mnassi            #+#    #+#             */
/*   Updated: 2022/11/05 12:31:56 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	l;
	char	*p;

	p = (char *)s;
	l = (char )c;
	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] == l)
			return (&p[i]);
		i++;
	}
	if (!l)
		return (&p[i]);
	return (NULL);
}
