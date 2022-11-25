/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:30:03 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/25 03:32:40 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int				i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((char)c == s[i])
			return ((char *)s + i);
		if (s == '\0')
			return (NULL);
		i--;
	}
	return (0);
}

// int	main ()
// {
// 	char l[]="hello d world !";
// 	char *p;
// 	p = ft_strrchr(l, 75);
// 	printf ("hada deyalii : %s\n", p);

// 	char z[]="hello d world !";
// 	char *k;
// 	k = strrchr(z, 75);
// 	printf ("hada system : %s\n", k);
// }
