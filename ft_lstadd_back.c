/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 02:24:02 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/23 20:12:37 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	// t_list				lastnode;

	if (!lst || !new)
		return ;
	ft_lstlast(*lst)->next = new;
}
/*
int	main ()
{
	t_list			*new0 = ft_lstnew("ever");
	t_list			*new1 = ft_lstnew("world");
	t_list			*new2 = ft_lstnew("hello");
	t_list			*last = ft_lstnew("last node");
	ft_lstadd_back(&new0, new1);
	ft_lstadd_back(&new1, new2);
	ft_lstadd_back(&new2, last);
	while (new0)
	{
		printf ("%s\n", new0 -> content);
		new0 = new0 -> next;
	}
}*/
