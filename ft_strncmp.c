/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 07:56:22 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/16 17:10:57 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0' && i < n))
	{
		if (s1[i] > s2[i])
			return (-7);
		else if (s1[i] < s2[i])
			return (7);
		i++;
	}
	return (0);
}
