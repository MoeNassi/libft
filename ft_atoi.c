/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:57:44 by mnassi            #+#    #+#             */
/*   Updated: 2022/11/03 15:30:42 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int							i;
	size_t						c;
	int							minus;

	minus = 1;
	i = 0;
	c = 0;
	while ((str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	if (str[i] == '-')
		minus *= (-1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10 + (str[i] - '0');
		i++;
		if ((c > 9223372036854775807) && minus == -1)
			return (0);
		if ((c > 9223372036854775807) && minus == 1)
			return (-1);
	}
	return (c * minus);
}
