/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:42:53 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/22 03:10:11 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	deletecontent(void *nodes)
{
	free(nodes);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list				*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*
int main ()
{
	t_list				*node0 = ft_lstnew("last");
	t_list				*node1 = ft_lstnew("never");
	t_list				*node2 = ft_lstnew("center");
	t_list				*node3 = ft_lstnew("begin");

	ft_lstadd_front(&node0, node1);
	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node2, node3);
	ft_lstclear(&node3, deletecontent);
	printf ("%s\n",node3->content);
}*/
