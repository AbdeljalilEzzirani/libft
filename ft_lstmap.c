/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:00:14 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/23 20:11:36 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*funct(void *list)
{
	void		*ret;


	ret = list;
	((char *)ret)[0] = ((char *)ret)[0] + 1;
	return (ret);
	//if (((char *)(list))[j]) ((char *)(list))[j] = ((char *)(list))[j] + i;
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
		ft_lstclear(&new, del);
		return (NULL);
	}
	lst = lst -> next;
	while (lst)
	{
		paste = ft_lstnew(f(lst -> content));
		if (!paste)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, paste);
		lst = lst -> next;
	}
	return (new);
}

void    printLST(t_list *lst, int print_adress)
{
	while (lst)
	{
		printf(print_adress ? "[%p]%s -> " : "%s -> ", (char *)lst,(char *)(lst)->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

// int main ()
// {

// 	// char *sgtr = "dasdasd";
// 	t_list				*node0 = ft_lstnew(ft_strdup("last"));
// 	t_list				*node1 = ft_lstnew(ft_strdup("never"));
// 	t_list				*node2 = ft_lstnew(ft_strdup("center"));
// 	t_list				*node3 = ft_lstnew(ft_strdup("begin"));
// 	t_list				*new;

// 	ft_lstadd_front(&node0, node1);
// 	ft_lstadd_front(&node1, node2);
// 	ft_lstadd_front(&node2, node3);
// 	printf("before : \n");
// 	printLST(node3, 1);
// 	new = ft_lstmap(node3, funct, deletecontent);
// 	printLST(new, 1);
// 	//printf ("%s\n",node3->content);
// }
