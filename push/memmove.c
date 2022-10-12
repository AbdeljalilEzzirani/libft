/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:16:47 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/12 18:50:15 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*str;

	i = 0;
	while (i < len)
	{
		ft_memcpy(str, ((char *)src), len);
		i++;
	}
	i = 0;
	while (i < len)
	{
		ft_memcpy(dst, ((char *)src), len);
		i++;
	}
	return (dst);
}

int	main ()
{
	char dst[]="hhhhhhhhhhhhhh";
	char src[]="krkrkrkkrkrkrk";

	ft_memmove(dst, src, 8);
	printf ("my function : %s\n", dst);
	char ldst[]="hhhhhhhhhhhhhh";
	char lsrc[]="krkrkrkkrkrkrk";
	memmove(ldst, lsrc, 8);
	printf ("my function : %s\n", ldst);
}
