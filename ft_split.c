/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:49:20 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/06 22:12:23 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	int				i;
	int				j;
	int				len;
	char			**tab;
	char			*cas;

	i = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			j = i;
			++tab;
			while (s[j] != c)
				j++;
			len = j - i;
			cas = ft_substr(s, i, len);
			tab = (char **) malloc (sizeof(char [i][len + 1]));
			ft_strlcpy((char *)s, tab[i], len + 1);
			i = j;
		}
		i++;
	}
	return (tab);
}

int	main ()
{
	char src[]="__hello__world_how_are_you___";
	char			**p;
	int				i;

	i = 0;
	p = ft_split(src, '_');
	while (p[i])
	{
		printf ("%s\n", p[i]);
		i++;
	}
}
