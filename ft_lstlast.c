/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 01:29:45 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/21 02:14:44 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst -> next;
	return (lst);
}
/*
int	main ()
{
	t_list				*node0 = ft_lstnew("last");
	t_list				*node1 = ft_lstnew("never");
	t_list				*node2 = ft_lstnew("center");
	t_list				*node3 = ft_lstnew("begin");


	ft_lstadd_front(&node0, node1);
	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node2, node3);
	printf("%s\n", ft_lstlast(node3)->content);
}*/
