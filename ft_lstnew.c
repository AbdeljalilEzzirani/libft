/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:54:30 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/19 16:00:43 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list					*node;

	node = (t_list *) malloc(sizeof(t_list));
	node -> content = content;
	node -> next = NULL;
	return (node);
}
/*
int main ()
{
	t_list			*exp;
	char		value[]="Hello World !";
	exp = ft_lstnew(value);
	printf ("%s\n", exp->content);
}*/
