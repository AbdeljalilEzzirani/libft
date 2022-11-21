/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:01:35 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/21 01:44:50 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*
int	main ()
{
	t_list *node1 = ft_lstnew("heloo");
	t_list *node2 = ft_lstnew("weloo");
	t_list	*news = ft_lstnew("happy");
	t_list	*ptr;

	printf ("test0\n");
	ptr = node1;

	node1 -> next = node2;
	node2 -> next = NULL;
	printf ("%s ptr = %p news = %p\n", (char *)(ptr -> content), ptr, news);
	ft_lstadd_front(&ptr, news);
	printf ("%s ptr after = %p \n", (char *)(ptr -> content), ptr);
	printf("%s", (char *)((ptr -> next) -> content));
}*/
