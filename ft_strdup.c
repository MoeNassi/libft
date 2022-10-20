/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:19:21 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/20 07:46:45 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_strdup(const char *s1)
{
	char		*p;
	size_t		i;
	char		*k;
	int			l;

	k = (char *)s1;
	i = 0;
	l = ft_strlen(s1);
	p = malloc((l + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_memcpy(p, k, l);
	p[i] = '\0';
	return (p);
}
