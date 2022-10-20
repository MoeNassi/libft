/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 07:41:25 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/19 10:43:38 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		j;
	char	*p;

	j = 0;
	p = (char *)s;
	while (p[j])
		j++;
	if (c == 0)
		return ((char *)&p[j]);
	while (j > 0)
	{
		j--;
		if (p[j] == c)
			return (&p[j]);
	}
	return (0);
}
