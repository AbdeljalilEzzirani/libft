/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:26:01 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/21 01:22:15 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int					i;

	if (!lst || !*lst)
		return (0);
	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}
/*
   int	main ()
   {
   t_list			*new0 = ft_lstnew("ever");
   t_list			*new1 = ft_lstnew("world");
   t_list			*new2 = ft_lstnew("hello");
   ft_lstadd_front(&new0, new1);
   ft_lstadd_front(&new1, new2);
   printf ("%d\n", ft_lstsize(new2));
   }*/
