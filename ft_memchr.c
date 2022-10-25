/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:57:49 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/25 14:13:06 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (((unsigned char *)s)[i] && i < n)
	{
		if (c == ((unsigned char *)s)[i])
			return ((void *)s + i);
			i++;
	}
	return (NULL);
}

int	main ()
{
	char s[]="hello world !";
	char *p;
	p = ft_memchr(s, 'z', 5);
	printf ("hada deyaliii : %s\n", p);

	char l[]="hello world !";
	char *d;
	d = memchr(l, 'z', 5);
	printf ("hada deyalhom : %s\n", d);
}
