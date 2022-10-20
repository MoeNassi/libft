/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:19:16 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/20 14:37:13 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*s;

	start = 0;
	end = 0;
	end = ft_strlen(s1);
	s = malloc(end * sizeof(char));
	if (!s)
		return (NULL);
	while (s1[start] == set)
		start++;
		
	while (s1[end] == set)
		end--;
	
}
