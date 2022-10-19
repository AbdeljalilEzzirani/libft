/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:49:25 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/19 20:39:46 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t			lensrc;
	size_t			lendst;
	size_t			i;
	size_t			n;

	lensrc = ft_strlen (src);
	lendst = ft_strlen (dst);
	i = 0;
	n = lendst;
	if (dstsize < lendst)
		return (lensrc + dstsize);
	else
	{
		while (src[i] && lendst < dstsize -1)
		{
			dst[lendst] = src[i];
			lendst++;
			i++;
		}
		return (lensrc + n);
	}
	return (0);
}

int	main ()
{
	char src[]="hada string sinq sinq ::";
	char dst[90]="over flow ::";
	int					n;
	n = ft_strlcat(dst, src, 20);

	printf ("hada deyaliii : %d\n", n);
	printf ("hada deyaliii : %s\n", dst);

	int					m;
	char ksrc[]="hada string sinq sinq ::";
	char kdst[8]="over flow ::";
	m = strlcat(kdst, ksrc, 20);
	printf ("hadaaa system : %d\n", m);
	printf ("hadaaa system : %s\n", kdst);
}
