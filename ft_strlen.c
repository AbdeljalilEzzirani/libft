/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:54:09 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/19 14:43:02 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int				i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*int	main ()
{
	const char *str=NULL;
	int			i;

	i = ft_strlen(str);
	printf ("len of string is : %d\n", i);
	i = strlen(str);
	printf ("len of string is function system : %d\n", i);
}*/
