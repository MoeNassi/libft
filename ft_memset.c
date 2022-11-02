/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:35:14 by mnassi            #+#    #+#             */
/*   Updated: 2022/11/01 09:26:58 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*s;

	i = 0;
	s = (unsigned char *)b;
	while (i < len)
	{
		*(s + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
