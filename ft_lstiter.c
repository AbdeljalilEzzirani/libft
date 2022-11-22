/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 04:11:57 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/22 04:54:04 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	funct(void *list)
{
	int					i;
	int j;

	i = 1;
	j = 0;
	if (list)
		while((char)list[j])
		{
			(char)list[i] = (char)list[j] + i;
			j++;
		}
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}

int	main ()
{
	t_list				*node0 = ft_lstnew("last");
	t_list				*node1 = ft_lstnew("never");
	t_list				*node2 = ft_lstnew("center");
	t_list				*node3 = ft_lstnew("begin");


	ft_lstadd_front(&node0, node1);
	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node2, node3);
	ft_lstiter(node3, funct);
	printf ("%s\n", node3->content);
}
