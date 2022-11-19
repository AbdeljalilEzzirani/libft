/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:01:35 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/19 17:43:25 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	lst -> link = head;
	lst -> content = new;
}

int	main ()
{
	t_list				**dst;
	t_list				*src;
	char				txt1[]="hello ";
	char				txt2[]="world";

	dst = txt1;
	src = txt2;
	printf ("%s\n", ft_lstadd_front(dst, src));
}
