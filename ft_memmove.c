/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:09:45 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/19 10:45:45 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*s;
	char		*d;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d == 0 && s == 0)
		return (NULL);
	if (d < s)
		ft_memcpy(d, s, len);
	if (d >= s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	return (d);
}
