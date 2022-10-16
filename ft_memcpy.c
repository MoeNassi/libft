/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 05:21:19 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/16 13:17:25 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int				i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (*(d + i) != '\0')
		i++;
	while (n > 0)
	{
		*(d + n) = *(s + n);
		n--;
	}
	if (n == 0)
		*(d + 0) = *(s + 0);
}
