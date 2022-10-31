/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:45:47 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/30 17:22:55 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

void *ft_calloc(size_t count, size_t size)
{
	int					*ptr;
	size_t		tot_size;

	tot_size = count * size;
	ptr = (int*) malloc(tot_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, tot_size);
	//memset(ptr, '\0', tot_size); 
	return (ptr);
}

/*int	main ()
{
	int	i;
	int *s;

	s = ft_calloc(3, 4);
	i = 0;
	while (i < 3)
	{
		printf("%d\n", s[i]);
		i++;
	}
	return (0);
}*/
