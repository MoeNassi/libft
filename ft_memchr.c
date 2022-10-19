/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:56:58 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/19 09:06:22 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*p;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == c)
			return (&p[i]);
		i++;
	}
	if (!c)
		return (0);
	return (0);
}
