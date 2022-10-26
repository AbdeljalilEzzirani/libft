/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:00:10 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/26 10:40:51 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	i = 0;

	while (n > 0)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
		n--;
	}
	return (0);
}

int	main ()
{
	char r1[]="hello";
	char r2[]="hellokkjdfjsb";
	int				j;
	j = ft_memcmp(r1, r2, 15);
	printf ("%d\n", j);

	char s1[]="hello";
	char s2[]="hellokkjbsdkb";
	int				i;
	i = memcmp(s1, s2, 15);
	printf ("%d\n", i);
}
