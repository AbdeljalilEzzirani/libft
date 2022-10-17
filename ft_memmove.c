/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:16:47 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/14 01:16:46 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	if (dst > src && src + len > dst)
	{
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	}
	else
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);

}

// int	main ()
// {
// 	char src[200]="Hello World";
// 	//ft_memmove(src + 4, src + 6, 4);
// 	//printf ("hadii deyali : %s\n", src);
// 	memmove(src + 4, src + 6, 4);
// 	printf ("hadii system : %s\n", src);
// }
// int	main ()
// {
// 	char src[200]="Hello World";
	
// 	// printf("%s", ft_memmove(NULL, src, 5));
// 	printf("%s", memmove(NULL, src, 5));
// }
