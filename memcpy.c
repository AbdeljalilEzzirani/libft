/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:22:53 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/11 23:29:06 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, void *src, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

int	main ()
{
	char dst[]="hello world !";
	char src[]="hhhhhhhhhhhhh";

	ft_memcpy(dst, src, 5);
	printf ("hadii deyalii : %s\n", dst);
	memcpy(dst, src, 5);
	printf ("hadii deyalii : %s\n", dst);
}
