/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:22:53 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/13 23:03:54 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src,	size_t n)
{
	size_t			i;
	char	*d;
	const char	*s;

	i = 0;
	s = src;
	d = dst;
	if (s == NULL && d == NULL)
		return (NULL);
	while (i<n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// int	main ()
// {
// 	char dst[]="hhhhhhhhhhhh";
// 	// char src[]="";

// 	printf("hadii deyalii : %s\n", ft_memcpy(NULL, NULL, 0));

// 	// printf("hadii deyal system : %s\n", memcpy(NULL, NULL, 0));
// }

// void *ft_memcpy(void *dst, void *src, size_t n)
// {
// 	size_t			i;

// 	i = 0;

// 	if (!((char *)dst)[i] && !((char *)src)[i])
// 		return (NULL);
// 	while (i < n)
// 	{
// 		((char *)dst)[i] = ((char *)src)[i];
// 		i++;
// 	}
// 	return (dst);
// }