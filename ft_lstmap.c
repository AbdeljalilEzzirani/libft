/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:00:14 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/23 01:00:59 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	funct(void *list)
{
	int					j;
	int					i;

	j = 0;
	i = 1;
	if (((char *)(list))[j])
		((char *)(list))[j] = ((char *)(list))[j] + i;
}

void	deletecontent(void *nodes)
{
	free(nodes);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst || !f)
		return (NULL);
	t_list			*new;
	t_list			*paste;

	new = ft_lstnew(f(lst -> content));
	if (!new)
	{
		ft_lstclear(new, del);
		return (NULL);
	}
	lst = lst -> next;
	while (lst)
	{
		paste = ft_lstnew(f(lst -> content));
		if (!paste)
		{
			ft_lstclear(paste, del);
			return (NULL);
		}
		ft_lstadd_back(&new, paste);
		lst = lst -> next;
	}
	return (new);
}

int main ()
{
	t_list				*node0 = ft_lstnew("last");
	t_list				*node1 = ft_lstnew("never");
	t_list				*node2 = ft_lstnew("center");
	t_list				*node3 = ft_lstnew("begin");


	ft_lstadd_front(&node0, node1);
	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node2, node3);
	printf("%s\n", ft_lstmap(&node3, funct, deletecontent));
	//printf ("%s\n",node3->content);
}
