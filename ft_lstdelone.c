/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:14:44 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/22 01:02:24 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	deletecontent(void *nodes)
{
	free(nodes);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}
/*
int main ()
{
	t_list			*new = ft_lstnew("hello world");

	ft_lstdelone(new, deletecontent);
	//printf ("%s\n", new->content);
}*/
