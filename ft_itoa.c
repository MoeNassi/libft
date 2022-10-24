/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 07:17:17 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/24 18:54:45 by mnassi           ###   ########.fr       */
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
	long	s;

	s = (long)n;
	i = count(s);
	if (s < 0 || s == 0)
		i = count(s) + 1;
	l = malloc(i * sizeof(char) + 1);
	if (!l)
		return (NULL);
	l[i] = '\0';
	if (s == 0)
		l[0] = s + '0';
	if (s < 0)
	{
		l[0] = '-';
		s = s * (-1);
	}
	while (s != 0)
	{
		l[i - 1] = (s % 10) + '0';
		s = s / 10;
		i--;
	}
	return (l);
}

// int main()
// {
// 	int 	i = -2147483648;
// 	printf("%s\n", ft_itoa(i));
// }
