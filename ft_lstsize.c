/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:07:58 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/26 14:51:54 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list	*lst)
{
	int		c;
	t_list	*temp;

	if (!lst)
		return (0);
	c = 0;
	temp = lst;
	while (temp != NULL)
	{
		temp = temp -> next;
		c++;
	}
	return (c);
}

int	main(void)
{
  int x = 7;
  int y = 5;

	t_list	*head;
	t_list	*last;

	head = malloc(sizeof(t_list *));
	head -> next -> content = &x;
	last = malloc(sizeof(t_list *));
	head -> next = last;
	last-> next -> content =&y;
	last -> next = NULL;
	//printf("%d", ft_lstsize(head));
}
