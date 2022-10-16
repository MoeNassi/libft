/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:47:42 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/16 12:36:52 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		j;
	int		i;
	int		k;

	k = (int)len;
	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i <= k)
	{
		if (needle[j] == haystack[i])
			return ((char *)&haystack[i]);
		i++;
	}
	if (needle[i] != haystack[i])
		return (NULL);
	return (0);
}
