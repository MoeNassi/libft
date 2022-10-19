/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 02:04:29 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/18 17:02:54 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	char	*s;

	i = 0;
	s = malloc(count * sizeof(char));
	if (!s)
		return (NULL);
	ft_bzero(s, (count * size));
	return (s);
}
