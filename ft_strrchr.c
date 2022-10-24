/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:30:03 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/24 01:12:38 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int				i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (c == s[i])
			return ((char *)s + i);
		if (s == '\0')
			return NULL;
		i--;
	}
	return (0);
}

int	main ()
{
	char l[]="hello d world !";
	char *p;
	p = ft_strrchr(l, 0);
	printf ("hada deyalii : %s\n", p);

	char z[]="hello d world !";
	char *k;
	k = strrchr(z, 0);
	printf ("hada system : %s\n", k);
}
