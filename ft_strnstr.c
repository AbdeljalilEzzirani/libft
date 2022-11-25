/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:43:03 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/25 03:40:38 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t						i;
	size_t						j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && haystack[i + j] && (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
/*
int	main ()
{
	char src[]="heakllo akdbez";
	char chercher[]="llo";
	printf ("hada deyalii : %s\n", ft_strnstr(src, chercher, 11));	
	char dst[]="heakllo akdbez";
	char cherch[]="llo";
	printf ("hada system  : %s\n", strnstr(dst, cherch, 11));
}*/
