/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:00:10 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/25 20:55:21 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	//size_t				j;
	//size_t				k;

	//j = ft_strlen((const char *)s1);
	//k = ft_strlen((const char *)s2);
	i = 0;

	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}

int	main ()
{
	char r1[5]="hello";
	char r2[5]="hello";
	int				j;
	j = ft_memcmp(r1, r2, 10);
	printf ("%d\n", j);

	char s1[5]="hello";
	char s2[5]="hello";
	int				i;
	i = memcmp(s1, s2, 10);
	printf ("%d\n", i);
}
