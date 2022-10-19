/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 07:41:25 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/19 09:45:01 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		j;
	int		n;
	char	*p;

	n = 0;
	j = 0;
	p = (char *)s;
	if (!s)
		return (0);
	while (p[j])
		j++;
	while (j > 0)
	{
		j--;
		if (p[j] == c)
			return (&p[j]);
	}
	if (!c)
		return (0);
	return (0);
}
