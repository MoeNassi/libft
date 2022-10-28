/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:21:18 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/27 11:48:42 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*rm;
	t_list	*fre;

	if (!lst || !del)
		return ;
	rm = *lst;
	while (rm != NULL)
	{
		fre = rm;
		rm = rm -> next;
		del(fre -> content);
		free(fre);
	}
	*lst = NULL;
}
