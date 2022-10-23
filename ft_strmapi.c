/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 07:55:35 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/23 09:39:41 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
char	ft_toupper(unsigned int u, char c)
{
	u = 32;
	if (c >= 'a' && c <= 'z')
		c -= u;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		ind;
	char	*notstr;
	char	*str;
	int		j;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	ind = strlen(s);
	str = malloc(ind + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
int main()
{
	printf("%s\n", ft_strmapi("Hello", ft_toupper));
}