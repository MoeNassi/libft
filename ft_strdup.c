/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:19:21 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/24 07:16:28 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*p;
	char		*k;
	int			l;

	k = (char *)s1;
	l = ft_strlen(s1);
	p = malloc((l + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_memcpy(p, k, l);
	p[l] = '\0';
	return (p);
}
