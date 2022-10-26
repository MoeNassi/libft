/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 08:06:46 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/25 13:49:20 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*s;
	size_t			j;

	j = 0;
	p = (unsigned char *)s1;
	s = (unsigned char *)s2;
	if (p == 0 && s == 0)
		return (0);
	while (j < n)
	{
		if (p[j] > s[j] || p[j] < s[j])
			return (((unsigned char )p[j]) - ((unsigned char )s[j]));
		j++;
	}
	return (0);
}
