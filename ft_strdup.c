/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:19:21 by mnassi            #+#    #+#             */
/*   Updated: 2022/11/06 10:42:26 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*p;
	int			l;

	l = ft_strlen(s1);
	p = malloc((l + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, l);
	p[l] = '\0';
	return (p);
}
