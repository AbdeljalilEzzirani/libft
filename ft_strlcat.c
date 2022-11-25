/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:49:25 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/25 03:53:53 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			lensrc;
	size_t			lendst;
	size_t			i;
	size_t			n;

	lensrc = ft_strlen (src);
	lendst = ft_strlen (dst);
	if (dst == NULL || dstsize == 0)
		return (lensrc);
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
		dst[lendst] = '\0';
		return (lensrc + n);
	}
	return (0);
}
//rood lball me3aa haad lcas raah system mehandliiih
/*
int	main ()
{
	//char src[]="hada string sinq sinq ::";
	char dst[90]="";
	int	n;
	n = ft_strlcat(dst, "123", 0);

	printf ("hada deyaliii : %d\n", n);
	//printf ("hada deyaliii : %s\n", dst);
}
*/
	/*int					m;
	char ksrc[]="hada string sinq sinq ::";
	//char kdst[8]="over flow ::";
	m = strlcat(NULL, ksrc, 0);
	printf ("hadaaa system : \n%d\n", m);
	//printf ("hadaaa system : %s\n", kdst);*/
