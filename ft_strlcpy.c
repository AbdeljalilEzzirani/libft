/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:22:32 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/20 20:58:04 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t				i;
	size_t				n;

	n = strlen(src);
	if (dstsize == 0)
		return (n);
	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (n);
}

/*int	main ()
{
	char src[]="hello world !";
	char dst[200];
	int			n;
	int			m;

	n = ft_strlcpy(dst, src, 0);
	printf ("hada deyaliii : %d\n", n);
	printf ("hada deyaliii : %s\n", dst);
	m = strlcpy(dst, src, -1);
	printf ("hada system : %d\n", m);
	printf ("hada system : %s\n", dst);
}*/
