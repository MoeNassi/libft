/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 07:17:17 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/24 10:59:14 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*l;
	int		i;
	int		j;

	j = 0;
	i = count(n);
	if (n < 0)
		i = count(n) + 1;
	l = malloc(i * sizeof(char) + 1);
	if (!l)
		return (NULL);
	l[i] = '\0';
	if (n < 0)
	{
		l[j] = '-';
		n = n * (-1);
		j++;
	}
	while (n != 0)
	{
		l[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (l);
}
