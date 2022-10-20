/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:19:21 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/20 07:53:08 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_strdup(const char *s1)
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